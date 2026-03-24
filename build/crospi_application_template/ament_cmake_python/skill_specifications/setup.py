from setuptools import find_packages
from setuptools import setup

setup(
    name='skill_specifications',
    version='0.0.0',
    packages=find_packages(
        include=('skill_specifications', 'skill_specifications.*')),
)
