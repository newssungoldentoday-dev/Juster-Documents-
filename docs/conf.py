import os
import sys
# This tells Sphinx to look inside your System folder
sys.path.insert(0, os.path.abspath('../System'))

# Set the version to match your other files
version = '1.1.0'
release = '1.1.0'

# --- Static File Configuration ---

# This tells Sphinx to look for your _static folder
html_static_path = ['_static']

# This tells Sphinx to load your specific stylesheet
html_css_files = ['style.css']
