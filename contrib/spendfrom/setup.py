from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for pythonbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@pythonbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
