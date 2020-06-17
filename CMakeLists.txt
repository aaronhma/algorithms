#
# MIT License
#
# Copyright (c) 2020 - Present Aaron Ma.
# All Rights Reserved.
#
# This file is part of the Algorithms repository,
# by using this file you have agreed to abide
# by the license at all times.
#
# @file CODEOWNERS
#
cmake_minimum_required(VERSION 3.11.2)
project(ALGORITHMS VERSION 0.0.1)
message(STATUS "Compiling...")

set(PROJECT_HOMEPAGE_URL "https://github.com/aaronhma/algorithms")
set(PROJECT_DESCRIPTION "My implementation of algorithms!")
set(PROJECT_VERSION VERSION 0.0.1)

add_subdirectory(data_structures)
add_subdirectory(algorithms)
