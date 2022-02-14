
#生成相应的c++代码:头文件里，枚举类型的每个值转为字符串
#就很棒

import sys

print('参数的个数: ',len(sys.argv),'个')
print(sys.argv[0])
enumName=''

if len(sys.argv)<2:
    print('need extro *.h文件')
    exit()
# open read *.h context
fr=open(sys.argv[1],'r')
alltxt=fr.read(-1)
pos1=alltxt.find('{')
pos2=alltxt.find('}')
enum_types=alltxt[pos1+1:pos2].replace(' ','').replace('\n','')
enum_lists=enum_types.split(',')
enumName=alltxt[pos2+1:].replace(' ','').replace(';','')
print('enum name',enumName)
print(enum_lists)
with open('1.cpp','w') as f:
    f.write('const char* enumToString(')
    f.write(enumName+' enumVar){\n')
    
    f.write('\tswitch (enumVar)\n\t{\n')
    for list_value in enum_lists:
        # print('xxxxxx',list_value)
        case_str='\t\tcase '+list_value+':\n'+'\t\t\treturn \"'+list_value+'\";\n'+'\t\t\tbreak;\n'
        print(case_str)
        f.write(case_str)
        pass
    f.write('\t}\n')
    
    f.write('}\n')
    f.close()