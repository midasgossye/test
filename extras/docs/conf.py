import sys
import os
import shlex
import subprocess

read_the_docs_build = os.environ.get('READTHEDOCS', None) == 'True'

if read_the_docs_build:
    subprocess.call('doxygen', shell=True)

extensions = ['breathe']
breathe_projects = { 'test_doc': 'xml' }
breathe_default_project = "test_doc"
templates_path = ['_templates']
source_suffix = '.rst'
master_doc = 'index'
project = u'test_doc'
copyright = u'2015, test_doc'
author = u'test_doc'
version = '1.0'
release = '1.0'
language = None
exclude_patterns = ['_build']
pygments_style = 'sphinx'
todo_include_todos = False
html_static_path = ['_static']
htmlhelp_basename = 'test_docdoc'
latex_elements = {
}
latex_documents = [
  (master_doc, 'test_doc.tex', u'test\_doc Documentation',
   u'test\_doc', 'manual'),
]
