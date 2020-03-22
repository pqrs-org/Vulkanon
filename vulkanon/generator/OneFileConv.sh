#!/bin/sh

[ -f "$1" ] || exit

fullpath=$(realpath $1)
targetpath="$(basename $(dirname $fullpath))/$(basename $fullpath)"

./copy-from-xml.php $fullpath
./convall.sh $targetpath
