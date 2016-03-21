#!/bin/sh

curl https://docs.google.com/spreadsheets/d/1Sh8Udq5o1GBX1DODEOEZdQqJ3QwroCw_bVlO0DSjV7o/pub?output=tsv | 
awk '{if (NR!=1) {print}}'  > results.dat
