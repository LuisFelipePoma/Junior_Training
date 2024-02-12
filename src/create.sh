#!/bin/bash

model='/home/felipe/Codes/JuniorTraining/src/model.cpp'


function generate_file(){

	local counter=1
	
	# echo first param
	if [ -z "$1" ]
	then
		echo "No argument supplied"
		return 1
	fi

	# If File exits
    for dir in */; do
    	folder_name="${counter}_${1// /_}/"
		if [ -e "$folder_name" ];then 
			echo "This folder already exist!!!"
			return 1
		fi
        ((counter+=1))
	done
    
	folder_name="${counter}_${1// /_}/"

	# Try create the folder
	 mkdir -p "$folder_name" || {
        echo "Error to create the folder '$folder_name'"
        return 2
    }

	# Try copy the model
	cp "$model" "$folder_name/main.cpp" || {
        echo "Error copy the model in the folder '$folder_name'"
        return 3
    }

	# Create file to the input
	touch "$folder_name/input.txt" || {
        echo "Error creating the file input in the folder '$folder_name'"
        return 4
    }

	# Message
	echo "Folder and files in ($PWD/$folder_name) created sucessfully!!! "
}

alias ccp="generate_file"