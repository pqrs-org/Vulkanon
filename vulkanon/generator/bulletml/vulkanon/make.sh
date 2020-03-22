#!/bin/sh

for f in *.bnml; do
    destfile=$(basename $f .bnml).xml
    echo "$f -> $destfile"
    java -jar ~/gba/tools/bulletnotml.jar $f > $destfile
done
