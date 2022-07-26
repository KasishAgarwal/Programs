
dict={"trs":5,"age":56,"name":"Kasish"}
print(dict["name"])
print(dict.keys())         #print all keys
print(dict.items())         #print all pairs
print(dict.values())         #print all values
dict["age"]=30          #update existing
dict["dob"]="01/04/1998"    #add new
print(dict)
del dict["dob"]
print(dict)
dict.clear()   #remove all entries
print(dict)
del dict
print(dict)    #delete dictionary

