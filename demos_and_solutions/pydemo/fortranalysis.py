import re
with open("area.F90","r") as ffile:
    for line in ffile:
        line = line.strip()
        hasfunction = re.search("([A-Za-z\(\)0-9]+) +[Ff]unction +([A-Za-z0-9]+)",line)
        if hasfunction and not re.search("[Ee]nd [Ff]unction",line):
            print("Line <<{}>> has a function".format(line))
            print("Type: {}, Name: {}"\
                  .format(hasfunction.groups()[0],hasfunction.groups()[1]))
            


