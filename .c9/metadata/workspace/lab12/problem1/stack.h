{"filter":false,"title":"stack.h","tooltip":"/lab12/problem1/stack.h","undoManager":{"mark":61,"position":61,"stack":[[{"start":{"row":0,"column":0},"end":{"row":66,"column":0},"action":"insert","lines":["#include \"Stack.h\"","#include <iostream>","#include \"LinkedList.h\"","// Author: Dilmanpreet nandu","// date: 30 November 2017","","int main() {","","\tStack<int> intTest;","\tStack<string> testString;","\tStack<char> charTest;","","\t//Stack of Int","\tcout <<  \" The initial size of stack of int is: \"<<intTest.getSize() << endl;","\t","","\tintTest.push(1);","\tintTest.push(3);","\tintTest.push(5);","\tintTest.push(7);","\tintTest.push(11);","\t\t","\t","\tcout << \"On adding 1 3 5 7 11 in the same order,the size is \"<<intTest.getSize();","","cout << endl;","\tcout<< \"and when we pop them we get:\";","\twhile (!intTest.empty())","\t\tcout << intTest.pop() << \" \";","\tcout << endl;","\tcout << endl;","\tcout << endl;","","\tcout <<  \" The initial size of stack with char is: \"<<charTest.getSize() << endl;","\tcharTest.push('D');","\tcharTest.push('I');","\tcharTest.push('L');","\tcharTest.push('M');","\tcharTest.push('A');","\tcharTest.push('N');","\tcout<<\"The first element in the stack is:\"<<charTest.peek()<<endl;","\t//Stack of char","\tcout << \"On adding D I L M A N in the same order, the size is \"<<charTest.getSize()<<endl;","\tcout<<\"All the elements in reverse order are \";","\twhile (!charTest.empty())","\t\tcout << charTest.pop() << \" \";","\t","\tcout << endl;","\tcout << endl;","\tcout << endl;","\t//Stack of string","\tcout <<  \" The initial size of stack with string is: \"<<testString.getSize() << endl;","\ttestString.push(\"Dilman\");","\ttestString.push(\"Lives\");","\ttestString.push(\"in\");","\ttestString.push(\"Vancouver\");","\t","\tcout << \"On adding Dilman lives in Vancouver\"<<endl;","\tcout<<\"The first element in the stack is \"<<testString.peek()<<endl;","\tcout<<\"All the elements in reverse order are \";","\twhile (!testString.empty())","\t\tcout << testString.pop() << \" \";","\t","","\treturn 0;","}",""],"id":1}],[{"start":{"row":4,"column":24},"end":{"row":4,"column":25},"action":"remove","lines":["7"],"id":2}],[{"start":{"row":4,"column":24},"end":{"row":4,"column":25},"action":"insert","lines":["8"],"id":3}],[{"start":{"row":4,"column":9},"end":{"row":4,"column":11},"action":"remove","lines":["30"],"id":4},{"start":{"row":4,"column":9},"end":{"row":4,"column":10},"action":"insert","lines":["2"]}],[{"start":{"row":4,"column":10},"end":{"row":4,"column":11},"action":"insert","lines":["7"],"id":5}],[{"start":{"row":0,"column":0},"end":{"row":51,"column":0},"action":"insert","lines":["#ifndef Stack_h","#define Stack_h","#include <stdio.h>","#include <iostream>","#include \"LinkedList.h\"","","// Author: Dilmanpreet nandu","// date: 30 November 2017","using namespace std;","template<typename T>","class Stack","{","\tpublic:","\t\tStack();","\t\tbool empty() const;","\t\tT peek() const;","\t\tvoid push(T value);","\t\tT pop();","\t\tint getSize() const;","\tprivate:","\t\tLinkedList<T> elements;","};","template<typename T>","Stack<T>::Stack(){","}","template<typename T>","bool Stack<T>::empty() const{","\treturn (elements.isEmpty());","}","template<typename T>","int Stack<T>::getSize() const{","\treturn elements.getSize();","}","template<typename T>","T Stack<T>:: peek() const{  ","\tif(elements.isEmpty()){","\t\tcout << \"Sorry nothing to peek \\n The stack is empty\" << endl;","\t\treturn NULL;","\t}","\treturn elements.get(getSize()-1);","}","template<typename T>","void Stack<T>::push(T value){","\telements.add(value);","}","template<typename T>","T Stack<T>::pop(){","\treturn elements.removeLast();","}","","#endif",""],"id":6}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":18},"action":"remove","lines":["#include \"Stack.h\""],"id":7}],[{"start":{"row":51,"column":0},"end":{"row":117,"column":0},"action":"remove","lines":["","#include <iostream>","#include \"LinkedList.h\"","// Author: Dilmanpreet nandu","// date: 27 November 2018","","int main() {","","\tStack<int> intTest;","\tStack<string> testString;","\tStack<char> charTest;","","\t//Stack of Int","\tcout <<  \" The initial size of stack of int is: \"<<intTest.getSize() << endl;","\t","","\tintTest.push(1);","\tintTest.push(3);","\tintTest.push(5);","\tintTest.push(7);","\tintTest.push(11);","\t\t","\t","\tcout << \"On adding 1 3 5 7 11 in the same order,the size is \"<<intTest.getSize();","","cout << endl;","\tcout<< \"and when we pop them we get:\";","\twhile (!intTest.empty())","\t\tcout << intTest.pop() << \" \";","\tcout << endl;","\tcout << endl;","\tcout << endl;","","\tcout <<  \" The initial size of stack with char is: \"<<charTest.getSize() << endl;","\tcharTest.push('D');","\tcharTest.push('I');","\tcharTest.push('L');","\tcharTest.push('M');","\tcharTest.push('A');","\tcharTest.push('N');","\tcout<<\"The first element in the stack is:\"<<charTest.peek()<<endl;","\t//Stack of char","\tcout << \"On adding D I L M A N in the same order, the size is \"<<charTest.getSize()<<endl;","\tcout<<\"All the elements in reverse order are \";","\twhile (!charTest.empty())","\t\tcout << charTest.pop() << \" \";","\t","\tcout << endl;","\tcout << endl;","\tcout << endl;","\t//Stack of string","\tcout <<  \" The initial size of stack with string is: \"<<testString.getSize() << endl;","\ttestString.push(\"Dilman\");","\ttestString.push(\"Lives\");","\ttestString.push(\"in\");","\ttestString.push(\"Vancouver\");","\t","\tcout << \"On adding Dilman lives in Vancouver\"<<endl;","\tcout<<\"The first element in the stack is \"<<testString.peek()<<endl;","\tcout<<\"All the elements in reverse order are \";","\twhile (!testString.empty())","\t\tcout << testString.pop() << \" \";","\t","","\treturn 0;","}",""],"id":8}],[{"start":{"row":6,"column":0},"end":{"row":8,"column":20},"action":"remove","lines":["// Author: Dilmanpreet nandu","// date: 30 November 2017","using namespace std;"],"id":9},{"start":{"row":6,"column":0},"end":{"row":7,"column":25},"action":"insert","lines":["// Author: Dilmanpreet nandu","// date: 27 November 2018"]}],[{"start":{"row":7,"column":25},"end":{"row":8,"column":0},"action":"insert","lines":["",""],"id":11}],[{"start":{"row":10,"column":6},"end":{"row":10,"column":7},"action":"insert","lines":["L"],"id":13}],[{"start":{"row":10,"column":7},"end":{"row":10,"column":8},"action":"insert","lines":["i"],"id":14}],[{"start":{"row":10,"column":8},"end":{"row":10,"column":9},"action":"insert","lines":["n"],"id":15}],[{"start":{"row":10,"column":9},"end":{"row":10,"column":10},"action":"insert","lines":["k"],"id":16}],[{"start":{"row":10,"column":10},"end":{"row":10,"column":11},"action":"insert","lines":["e"],"id":17}],[{"start":{"row":10,"column":11},"end":{"row":10,"column":12},"action":"insert","lines":["d"],"id":18}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":13},"action":"remove","lines":["Stack"],"id":19},{"start":{"row":0,"column":8},"end":{"row":0,"column":19},"action":"insert","lines":["LinkedStack"]}],[{"start":{"row":1,"column":8},"end":{"row":1,"column":13},"action":"remove","lines":["Stack"],"id":20},{"start":{"row":1,"column":8},"end":{"row":1,"column":19},"action":"insert","lines":["LinkedStack"]}],[{"start":{"row":21,"column":2},"end":{"row":22,"column":0},"action":"insert","lines":["",""],"id":21}],[{"start":{"row":22,"column":0},"end":{"row":23,"column":0},"action":"insert","lines":["",""],"id":22}],[{"start":{"row":23,"column":0},"end":{"row":24,"column":0},"action":"insert","lines":["",""],"id":23}],[{"start":{"row":24,"column":0},"end":{"row":25,"column":0},"action":"insert","lines":["",""],"id":24}],[{"start":{"row":25,"column":0},"end":{"row":26,"column":0},"action":"insert","lines":["",""],"id":25}],[{"start":{"row":26,"column":0},"end":{"row":27,"column":0},"action":"insert","lines":["",""],"id":26}],[{"start":{"row":27,"column":0},"end":{"row":28,"column":0},"action":"insert","lines":["",""],"id":27}],[{"start":{"row":28,"column":0},"end":{"row":29,"column":0},"action":"insert","lines":["",""],"id":28}],[{"start":{"row":29,"column":0},"end":{"row":30,"column":0},"action":"insert","lines":["",""],"id":29}],[{"start":{"row":30,"column":0},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":30}],[{"start":{"row":31,"column":0},"end":{"row":32,"column":0},"action":"insert","lines":["",""],"id":31}],[{"start":{"row":32,"column":0},"end":{"row":33,"column":0},"action":"insert","lines":["",""],"id":32}],[{"start":{"row":33,"column":0},"end":{"row":34,"column":0},"action":"insert","lines":["",""],"id":33}],[{"start":{"row":34,"column":0},"end":{"row":35,"column":0},"action":"insert","lines":["",""],"id":34}],[{"start":{"row":35,"column":0},"end":{"row":36,"column":0},"action":"insert","lines":["",""],"id":35},{"start":{"row":36,"column":0},"end":{"row":37,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":37,"column":0},"end":{"row":38,"column":0},"action":"insert","lines":["",""],"id":36}],[{"start":{"row":38,"column":0},"end":{"row":39,"column":0},"action":"insert","lines":["",""],"id":37}],[{"start":{"row":39,"column":0},"end":{"row":40,"column":0},"action":"insert","lines":["",""],"id":38}],[{"start":{"row":40,"column":0},"end":{"row":41,"column":0},"action":"insert","lines":["",""],"id":39}],[{"start":{"row":41,"column":0},"end":{"row":42,"column":0},"action":"insert","lines":["",""],"id":40}],[{"start":{"row":42,"column":0},"end":{"row":43,"column":0},"action":"insert","lines":["",""],"id":41}],[{"start":{"row":43,"column":0},"end":{"row":44,"column":0},"action":"insert","lines":["",""],"id":42}],[{"start":{"row":44,"column":0},"end":{"row":45,"column":0},"action":"insert","lines":["",""],"id":43}],[{"start":{"row":45,"column":0},"end":{"row":46,"column":0},"action":"insert","lines":["",""],"id":44}],[{"start":{"row":46,"column":0},"end":{"row":47,"column":0},"action":"insert","lines":["",""],"id":45}],[{"start":{"row":20,"column":2},"end":{"row":20,"column":12},"action":"remove","lines":["LinkedList"],"id":46},{"start":{"row":20,"column":2},"end":{"row":20,"column":3},"action":"insert","lines":["N"]}],[{"start":{"row":20,"column":3},"end":{"row":20,"column":4},"action":"insert","lines":["o"],"id":47}],[{"start":{"row":20,"column":4},"end":{"row":20,"column":5},"action":"insert","lines":["d"],"id":48}],[{"start":{"row":20,"column":5},"end":{"row":20,"column":6},"action":"insert","lines":["e"],"id":49}],[{"start":{"row":20,"column":10},"end":{"row":20,"column":11},"action":"insert","lines":["*"],"id":50}],[{"start":{"row":20,"column":9},"end":{"row":20,"column":10},"action":"remove","lines":[" "],"id":51}],[{"start":{"row":20,"column":10},"end":{"row":20,"column":11},"action":"insert","lines":[" "],"id":52}],[{"start":{"row":20,"column":20},"end":{"row":21,"column":0},"action":"insert","lines":["",""],"id":53},{"start":{"row":21,"column":0},"end":{"row":21,"column":2},"action":"insert","lines":["\t\t"]}],[{"start":{"row":21,"column":2},"end":{"row":21,"column":3},"action":"insert","lines":["i"],"id":54}],[{"start":{"row":21,"column":3},"end":{"row":21,"column":4},"action":"insert","lines":["n"],"id":55}],[{"start":{"row":21,"column":4},"end":{"row":21,"column":5},"action":"insert","lines":["t"],"id":56}],[{"start":{"row":21,"column":5},"end":{"row":21,"column":6},"action":"insert","lines":[" "],"id":57}],[{"start":{"row":21,"column":6},"end":{"row":21,"column":7},"action":"insert","lines":["s"],"id":58}],[{"start":{"row":21,"column":7},"end":{"row":21,"column":8},"action":"insert","lines":["o"],"id":59}],[{"start":{"row":21,"column":8},"end":{"row":21,"column":9},"action":"insert","lines":["z"],"id":60}],[{"start":{"row":21,"column":9},"end":{"row":21,"column":10},"action":"insert","lines":["e"],"id":61}],[{"start":{"row":21,"column":10},"end":{"row":21,"column":11},"action":"insert","lines":[";"],"id":62}],[{"start":{"row":21,"column":7},"end":{"row":21,"column":8},"action":"remove","lines":["o"],"id":63}],[{"start":{"row":21,"column":7},"end":{"row":21,"column":8},"action":"insert","lines":["i"],"id":64}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":8},"end":{"row":0,"column":21},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1543367920525,"hash":"033583a6afa2e022d36f915a9bc6c8a17965af97"}