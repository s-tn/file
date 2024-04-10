#!/bin/bash

if [ false ];
then 
# Cope & Paste this to install
#curl -o /usr/local/bin/download http://cdn.raph.live:9000/d/3 
#chmod +x /usr/local/bin/download
fi

echo "Saving File ID: "$1
echo "Into: "$2

if [ "$1" = "" ] || [ "$2" = "" ] || [ -z "$2" ] || [ -z "$1" ];
then
    echo
    echo "Error: Missing Arguments"
    exit 1
fi

curl http://cdn.raph.live:9000/d/$1 > "$2"

if [ "$3" == "tar" ];
then
    echo "Extracting File"
    tar -xvf $2
fi

if [ "$3" == "zip" ];
then
    echo "Extracting File"
    unzip $2
fi

if [ "$3" == "7z" ];
then
    echo "Extracting File"
    7z x $2
fi

if [ "$3" == "exe" ];
then
    echo "Loading Binary"
    chmod +x $2
fi