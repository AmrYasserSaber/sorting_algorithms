#!/bin/bash

git add --chmod +x $1
betty $1

if [ $? -ne 1 ]; then
	git add *
	git commit -m "Upload File $1"
	git push

fi