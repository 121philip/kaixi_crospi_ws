from setuptools import find_packages
from setuptools import setup

setup(
    name='trossen_widowx_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('trossen_widowx_interfaces', 'trossen_widowx_interfaces.*')),
)
