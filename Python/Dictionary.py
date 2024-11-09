# Dictionaries are used to store data values in key:value pairs and mutable
# Dict = {
#    "key" : "value",
#   "name": "Ambarish",
#    "Age" : 18,
#    "Subjects" : ["python","java"],
#    12.43 : 5
# }

# #print(Dict)
# #print(type(Dict))
# #print(Dict["name"])
# Dict["Subjects"] = "DS",
# Dict["roll"] =13
# print(Dict)
student  = {
"name" : "Ambarish",
"subjects" : {
       "DLD" : 85,
       "BEE" : 70,
   }
}
print(student)
print(student["subjects"])
print(student.keys())
print(student.values())
print(student.items())
print(student.get("name"))
student.update({"roll" : 13})
print(student)
#word = {
#    "cat" : "A small animal",
#    "table":["A pice of furniture","List of facts & figures"]
#}
#print(word)

# marks = {}
# x = int(input("enter phy:"))
# marks.update({"phy" : x})
# y = int(input("enter mat:"))
# marks.update({"mat" : y})
# z = int(input("enter chem:"))
# marks.update({"chem" : z})
# print(marks)