#!/bin/sh

mkdir -p data

for f in $(find bulletml/vulkanon -name '*.xml'); do
    ./copy-from-xml.php $f
done
