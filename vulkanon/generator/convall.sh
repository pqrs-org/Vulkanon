#!/bin/sh

cutcomment() {
    dir="data/xml"

    [ -d tmp ] || mkdir tmp

    if [ -z "$1" ]; then
        target=$(find $dir -name '*.xml')
    else
        target=$dir/$1
    fi

    for f in $target; do
        echo "parse" $f
        php ./php/cutcomment.php $f
    done
}

replacereference() {
    dir="tmp/00-cutcomment"

    if [ -z "$1" ]; then
        target=$(find $dir -name '*.xml')
    else
        target=$dir/$1
    fi

    for f in $target; do
        echo "parse" $f
        php ./php/replace-reference.php $f
    done
}

cleanup() {
    dir="tmp/01-rr"

    if [ -z "$1" ]; then
        target=$(find $dir -name '*.xml')
    else
        target=$dir/$1
    fi

    for f in $target; do
        echo "parse" $f
        php ./php/cleanup.php $f
    done
}

makestepfunc() {
    dir="tmp/02-cleanup"

    if [ -z "$1" ]; then
        target=$(find $dir -name '*.xml')
    else
        target=$dir/$1
    fi

    for f in $target; do
        echo "parse" $f
        php ./php/make-stepfunc.php $f
    done
}

splitbullet() {
    dir="tmp/03-makestepfunc"

    if [ -z "$1" ]; then
        target=$(find $dir -name '*.xml')
    else
        target=$dir/$1
    fi

    for f in $target; do
        echo "parse" $f
        php ./php/splitbullet.php $f
    done
}

gencode() {
    dir="tmp/04-splitbullet"

    if [ -z "$1" ]; then
        target=$(find $dir -name '*.xml')
    else
        target=$dir/$1
    fi

    for f in $target; do
        tailpath="$(basename $(dirname $f))/$(basename $f .xml)"
        echo "parse" $f

        php ./php/gen-callingvector.php $f
        if [ $? -eq 1 ]; then
            rm tmp/05-gen-callingvector/$tailpath.*
        else
            destfile="data/code/${tailpath}.cpp"
            mkdir -p $(dirname $destfile)
            php ./php/gen-code.php $f > $destfile
            if [ $? -eq 1 ]; then
                rm tmp/05-gen-callingvector/$tailpath.*
                rm $destfile
            else
                cp tmp/05-gen-callingvector/$tailpath.hpp $(dirname $destfile)
            fi
        fi
    done
}

#------------------------------------------------------------

cleanup-files.php
cutcomment $1
replacereference $1
cleanup $1
makestepfunc $1
splitbullet $1
gencode $1
./make-barragelist.php > data/code/barragelist.hpp
