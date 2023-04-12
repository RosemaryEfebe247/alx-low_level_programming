#!/usr/bin/python3
"""A function that defines an inherited class."""


def inherits_from(obj, a_class):
    """Checks if an object-instance is inherited.

    Args:
        obj (any): The object to check.
        a_class (type): The class to match the type of obj to.
    Returns:
        Reurn true If obj is an inherited instance.
        Otherwise - False.
    """
    if issubclass(type(obj), a_class) and type(obj) != a_class:
        return True
    return False
