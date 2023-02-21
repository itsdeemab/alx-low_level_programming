#!/bin/bash

# Prompt the user for a filename
read -p "Enter filename: " filename

# Add the file to the Git index
git add "$filename"

# Prompt the user for a commit message
read -p "Enter commit message: " message

# Commit the changes with the message
git commit -m "$message"

# Push the changes to the remote repository
git push

#itsdeemab
