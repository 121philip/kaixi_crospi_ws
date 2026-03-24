from setuptools import find_packages
from setuptools import setup

setup(
    name='betfsm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('betfsm_interfaces', 'betfsm_interfaces.*')),
)
