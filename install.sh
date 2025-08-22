#!/bin/bash
# Script to install Git, GCC, Vim, and Google Chrome on Ubuntu

# Exit on error
set -e

# Update system
echo "Updating system..."
sudo apt update -y && sudo apt upgrade -y

# Install Git, GCC, and Vim
echo "Installing Git, GCC, and Vim..."
sudo apt install -y git build-essential vim

# Install Google Chrome from official repository
echo "Installing Google Chrome..."

# Download and add Google Chrome signing key
wget -q -O - https://dl.google.com/linux/linux_signing_key.pub | sudo gpg --dearmor -o /usr/share/keyrings/google-chrome.gpg

# Add Google Chrome repository
echo "deb [arch=amd64 signed-by=/usr/share/keyrings/google-chrome.gpg] http://dl.google.com/linux/chrome/deb/ stable main" | sudo tee /etc/apt/sources.list.d/google-chrome.list > /dev/null

# Update and install
sudo apt update -y
sudo apt install -y google-chrome-stable

echo "Installation complete ✅"
