Run /home/ssl.sh

conda create -n handsonml python=3.6.12

conda init

conda activate handsonml

sed -i '/^c.NotebookApp.password/d' /home/ubuntu/.jupyter/jupyter_notebook_config.py

echo "c.NotebookApp.password = u'""$(python3 -c "from notebook.auth import passwd;print(passwd())")""'" >> /home/ubuntu/.jupyter/jupyter_notebook_config.py

---(handsonml)---

pip install --upgrade pip
pip install sklearn
pip install tensorflow-gpu==1.15.0
pip install matplotlib
pip install ipykernel
pip uninstall jedi
python -m ipykernel install --user --name handsonml --display-name "handsonml"
