import re

for name in [ "Humphrey Davie", "Abilene", "G", "Nothing6", "esreveR" ]:
    result = re.search("^[A-Z][a-z]+$",name)
    # ^ : beginning of string
    # [A-Z] : one match of character A-Z
    # [^A-Z] : one match of NOT character A-Z
    # [a-z]+ : at least one match of a-z
    # $ : end of the string
    if result:
        print("{}: Is a name".format(name))
    else:
        print("{}: Is not a name".format(name))
    firstlast = re.search("^([A-Z][a-z]+) ([A-Z][a-z]+)$",name)
    if firstlast:
        firstname = firstlast.groups()[0]
        lastname = firstlast.groups()[1]
        print("First name: {}, Last name: {}".format(firstname,lastname))

# Ctrol-u 4 Esc x indent-code
