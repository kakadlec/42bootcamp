#!/bin/sh

cat /etc/passwd | awk -F : '{print $1":"$2":"$3":"$4":"$6":"$7}' | sed -n 2~2p | rev | sed 's/.*x\://g' | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | sed s/$/,/ |  tr '\n' ' ' | sed 's/, $/./'