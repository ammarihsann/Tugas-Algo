#!/bin/bash

# Nama proyek (default: flask_app)
PROJECT_NAME=${1:-flask_app}

# Membuat direktori proyek
mkdir -p $PROJECT_NAME
cd $PROJECT_NAME

# Membuat virtual environment
python3 -m venv venv
source venv/bin/activate

# Menginstal Flask
pip install Flask

# Membuat file requirements.txt
echo "Flask" > requirements.txt

# Membuat file app.py
cat <<EOL > app.py
from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<p>Hello, World!</p>"
EOL

# Pesan sukses
echo "Proyek Flask '$PROJECT_NAME' berhasil dibuat."