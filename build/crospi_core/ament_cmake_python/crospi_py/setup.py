from setuptools import find_packages
from setuptools import setup

setup(
    name='crospi_py',
    version='0.0.0',
    packages=find_packages(
        include=('crospi_py', 'crospi_py.*')),
)
