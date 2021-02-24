#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/katecoin.ico

convert ../../src/qt/res/icons/katecoin-16.png ../../src/qt/res/icons/katecoin-32.png ../../src/qt/res/icons/katecoin-48.png ${ICON_DST}
