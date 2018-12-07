{"filter":false,"title":"Book.h","tooltip":"/lab4/Book.h","undoManager":{"mark":96,"position":96,"stack":[[{"start":{"row":0,"column":0},"end":{"row":42,"column":6},"action":"insert","lines":["   #ifndef BOOKING_H ","#define BOOKING_H","","#include <iostream>","#include <string>","#include <cstdlib> ","#include \"Room.h\"","#include \"Hotel.h\"","#include \"Customer.h\"","","","using namespace std;","","","class Booking","{","\t//All the private methods are created here","private:","   int bookingId;","\tstatic int bookingSeqN;","\tHotel hotel;","\tRoom room;","\tstring roomT;","\tCustomer customers;","","","\t//All the public methods are created here","public:","   Booking(Hotel& h, string roomType, Customer x);","\t","\tHotel getHotel();","\tint getBooking() ;","string getRoomType();","   Room getRoom() ;","\tCustomer getCustomer() ;","\t","//mutator functions ","   ","\t//void setHotel(Hotel h);","\tvoid setRoomType(string roomType);","   //void setCustomer(Customer x);","};","#endif"],"id":1}],[{"start":{"row":19,"column":12},"end":{"row":19,"column":23},"action":"remove","lines":["bookingSeqN"],"id":3},{"start":{"row":19,"column":12},"end":{"row":19,"column":16},"action":"insert","lines":["ISBN"]}],[{"start":{"row":0,"column":11},"end":{"row":0,"column":18},"action":"remove","lines":["BOOKING"],"id":4},{"start":{"row":0,"column":11},"end":{"row":0,"column":15},"action":"insert","lines":["Book"]},{"start":{"row":1,"column":8},"end":{"row":1,"column":15},"action":"remove","lines":["BOOKING"]},{"start":{"row":1,"column":8},"end":{"row":1,"column":12},"action":"insert","lines":["Book"]},{"start":{"row":14,"column":6},"end":{"row":14,"column":13},"action":"remove","lines":["Booking"]},{"start":{"row":14,"column":6},"end":{"row":14,"column":10},"action":"insert","lines":["Book"]},{"start":{"row":18,"column":7},"end":{"row":18,"column":14},"action":"remove","lines":["booking"]},{"start":{"row":18,"column":7},"end":{"row":18,"column":11},"action":"insert","lines":["Book"]},{"start":{"row":28,"column":3},"end":{"row":28,"column":10},"action":"remove","lines":["Booking"]},{"start":{"row":28,"column":3},"end":{"row":28,"column":7},"action":"insert","lines":["Book"]},{"start":{"row":31,"column":8},"end":{"row":31,"column":15},"action":"remove","lines":["Booking"]},{"start":{"row":31,"column":8},"end":{"row":31,"column":12},"action":"insert","lines":["Book"]}],[{"start":{"row":7,"column":10},"end":{"row":7,"column":15},"action":"remove","lines":["Hotel"],"id":5},{"start":{"row":7,"column":10},"end":{"row":7,"column":19},"action":"insert","lines":["Publisher"]},{"start":{"row":20,"column":1},"end":{"row":20,"column":6},"action":"remove","lines":["Hotel"]},{"start":{"row":20,"column":1},"end":{"row":20,"column":10},"action":"insert","lines":["Publisher"]},{"start":{"row":20,"column":11},"end":{"row":20,"column":16},"action":"remove","lines":["hotel"]},{"start":{"row":20,"column":11},"end":{"row":20,"column":20},"action":"insert","lines":["Publisher"]},{"start":{"row":28,"column":8},"end":{"row":28,"column":13},"action":"remove","lines":["Hotel"]},{"start":{"row":28,"column":8},"end":{"row":28,"column":17},"action":"insert","lines":["Publisher"]},{"start":{"row":30,"column":1},"end":{"row":30,"column":6},"action":"remove","lines":["Hotel"]},{"start":{"row":30,"column":1},"end":{"row":30,"column":10},"action":"insert","lines":["Publisher"]},{"start":{"row":30,"column":14},"end":{"row":30,"column":19},"action":"remove","lines":["Hotel"]},{"start":{"row":30,"column":14},"end":{"row":30,"column":23},"action":"insert","lines":["Publisher"]},{"start":{"row":38,"column":11},"end":{"row":38,"column":16},"action":"remove","lines":["Hotel"]},{"start":{"row":38,"column":11},"end":{"row":38,"column":20},"action":"insert","lines":["Publisher"]},{"start":{"row":38,"column":21},"end":{"row":38,"column":26},"action":"remove","lines":["Hotel"]},{"start":{"row":38,"column":21},"end":{"row":38,"column":30},"action":"insert","lines":["Publisher"]}],[{"start":{"row":8,"column":10},"end":{"row":8,"column":18},"action":"remove","lines":["Customer"],"id":6},{"start":{"row":8,"column":10},"end":{"row":8,"column":16},"action":"insert","lines":["Author"]},{"start":{"row":23,"column":1},"end":{"row":23,"column":9},"action":"remove","lines":["Customer"]},{"start":{"row":23,"column":1},"end":{"row":23,"column":7},"action":"insert","lines":["Author"]},{"start":{"row":23,"column":8},"end":{"row":23,"column":16},"action":"remove","lines":["customer"]},{"start":{"row":23,"column":8},"end":{"row":23,"column":14},"action":"insert","lines":["Author"]},{"start":{"row":28,"column":39},"end":{"row":28,"column":47},"action":"remove","lines":["Customer"]},{"start":{"row":28,"column":39},"end":{"row":28,"column":45},"action":"insert","lines":["Author"]},{"start":{"row":34,"column":1},"end":{"row":34,"column":9},"action":"remove","lines":["Customer"]},{"start":{"row":34,"column":1},"end":{"row":34,"column":7},"action":"insert","lines":["Author"]},{"start":{"row":34,"column":11},"end":{"row":34,"column":19},"action":"remove","lines":["Customer"]},{"start":{"row":34,"column":11},"end":{"row":34,"column":17},"action":"insert","lines":["Author"]},{"start":{"row":40,"column":13},"end":{"row":40,"column":21},"action":"remove","lines":["Customer"]},{"start":{"row":40,"column":13},"end":{"row":40,"column":19},"action":"insert","lines":["Author"]},{"start":{"row":40,"column":20},"end":{"row":40,"column":28},"action":"remove","lines":["Customer"]},{"start":{"row":40,"column":20},"end":{"row":40,"column":26},"action":"insert","lines":["Author"]}],[{"start":{"row":6,"column":10},"end":{"row":6,"column":14},"action":"remove","lines":["Room"],"id":7},{"start":{"row":6,"column":10},"end":{"row":6,"column":17},"action":"insert","lines":["Address"]},{"start":{"row":21,"column":1},"end":{"row":21,"column":5},"action":"remove","lines":["Room"]},{"start":{"row":21,"column":1},"end":{"row":21,"column":8},"action":"insert","lines":["Address"]},{"start":{"row":21,"column":9},"end":{"row":21,"column":13},"action":"remove","lines":["room"]},{"start":{"row":21,"column":9},"end":{"row":21,"column":16},"action":"insert","lines":["Address"]},{"start":{"row":22,"column":8},"end":{"row":22,"column":12},"action":"remove","lines":["room"]},{"start":{"row":22,"column":8},"end":{"row":22,"column":15},"action":"insert","lines":["Address"]},{"start":{"row":28,"column":29},"end":{"row":28,"column":33},"action":"remove","lines":["room"]},{"start":{"row":28,"column":29},"end":{"row":28,"column":36},"action":"insert","lines":["Address"]},{"start":{"row":32,"column":10},"end":{"row":32,"column":14},"action":"remove","lines":["Room"]},{"start":{"row":32,"column":10},"end":{"row":32,"column":17},"action":"insert","lines":["Address"]},{"start":{"row":33,"column":3},"end":{"row":33,"column":7},"action":"remove","lines":["Room"]},{"start":{"row":33,"column":3},"end":{"row":33,"column":10},"action":"insert","lines":["Address"]},{"start":{"row":33,"column":14},"end":{"row":33,"column":18},"action":"remove","lines":["Room"]},{"start":{"row":33,"column":14},"end":{"row":33,"column":21},"action":"insert","lines":["Address"]},{"start":{"row":39,"column":9},"end":{"row":39,"column":13},"action":"remove","lines":["Room"]},{"start":{"row":39,"column":9},"end":{"row":39,"column":16},"action":"insert","lines":["Address"]},{"start":{"row":39,"column":28},"end":{"row":39,"column":32},"action":"remove","lines":["room"]},{"start":{"row":39,"column":28},"end":{"row":39,"column":35},"action":"insert","lines":["Address"]}],[{"start":{"row":25,"column":0},"end":{"row":25,"column":27},"action":"insert","lines":[" Room roomarray[MAX_ROOMS];"],"id":8}],[{"start":{"row":25,"column":1},"end":{"row":25,"column":5},"action":"remove","lines":["Room"],"id":9},{"start":{"row":25,"column":1},"end":{"row":25,"column":2},"action":"insert","lines":["A"]}],[{"start":{"row":25,"column":2},"end":{"row":25,"column":3},"action":"insert","lines":["t"],"id":10}],[{"start":{"row":25,"column":3},"end":{"row":25,"column":4},"action":"insert","lines":["u"],"id":11}],[{"start":{"row":25,"column":4},"end":{"row":25,"column":5},"action":"insert","lines":["h"],"id":12}],[{"start":{"row":25,"column":5},"end":{"row":25,"column":6},"action":"insert","lines":["o"],"id":13}],[{"start":{"row":25,"column":6},"end":{"row":25,"column":7},"action":"insert","lines":["r"],"id":14}],[{"start":{"row":25,"column":6},"end":{"row":25,"column":7},"action":"remove","lines":["r"],"id":15}],[{"start":{"row":25,"column":5},"end":{"row":25,"column":6},"action":"remove","lines":["o"],"id":16}],[{"start":{"row":25,"column":4},"end":{"row":25,"column":5},"action":"remove","lines":["h"],"id":17}],[{"start":{"row":25,"column":3},"end":{"row":25,"column":4},"action":"remove","lines":["u"],"id":18}],[{"start":{"row":25,"column":2},"end":{"row":25,"column":3},"action":"remove","lines":["t"],"id":19}],[{"start":{"row":25,"column":2},"end":{"row":25,"column":3},"action":"insert","lines":["u"],"id":20}],[{"start":{"row":25,"column":3},"end":{"row":25,"column":4},"action":"insert","lines":["r"],"id":21}],[{"start":{"row":25,"column":3},"end":{"row":25,"column":4},"action":"remove","lines":["r"],"id":22}],[{"start":{"row":25,"column":3},"end":{"row":25,"column":4},"action":"insert","lines":["t"],"id":23}],[{"start":{"row":25,"column":4},"end":{"row":25,"column":5},"action":"insert","lines":["h"],"id":24}],[{"start":{"row":25,"column":5},"end":{"row":25,"column":6},"action":"insert","lines":["o"],"id":25}],[{"start":{"row":25,"column":6},"end":{"row":25,"column":7},"action":"insert","lines":["r"],"id":26}],[{"start":{"row":25,"column":8},"end":{"row":25,"column":17},"action":"remove","lines":["roomarray"],"id":27},{"start":{"row":25,"column":8},"end":{"row":25,"column":9},"action":"insert","lines":["A"]}],[{"start":{"row":25,"column":8},"end":{"row":25,"column":9},"action":"remove","lines":["A"],"id":28}],[{"start":{"row":25,"column":8},"end":{"row":25,"column":9},"action":"insert","lines":["a"],"id":29}],[{"start":{"row":25,"column":9},"end":{"row":25,"column":10},"action":"insert","lines":["u"],"id":30}],[{"start":{"row":25,"column":10},"end":{"row":25,"column":11},"action":"insert","lines":["t"],"id":31}],[{"start":{"row":25,"column":11},"end":{"row":25,"column":12},"action":"insert","lines":["h"],"id":32}],[{"start":{"row":25,"column":12},"end":{"row":25,"column":13},"action":"insert","lines":["o"],"id":33}],[{"start":{"row":25,"column":13},"end":{"row":25,"column":14},"action":"insert","lines":["r"],"id":34}],[{"start":{"row":25,"column":14},"end":{"row":25,"column":15},"action":"insert","lines":["A"],"id":35}],[{"start":{"row":25,"column":15},"end":{"row":25,"column":16},"action":"insert","lines":["r"],"id":36}],[{"start":{"row":25,"column":16},"end":{"row":25,"column":17},"action":"insert","lines":["r"],"id":37}],[{"start":{"row":25,"column":17},"end":{"row":25,"column":18},"action":"insert","lines":["a"],"id":38}],[{"start":{"row":25,"column":18},"end":{"row":25,"column":19},"action":"insert","lines":["y"],"id":39}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["R"],"id":40}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["O"],"id":41}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["O"],"id":42}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["M"],"id":43}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["S"],"id":44}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"insert","lines":["A"],"id":45}],[{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"insert","lines":["u"],"id":46}],[{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"insert","lines":["t"],"id":47}],[{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"insert","lines":["h"],"id":48}],[{"start":{"row":25,"column":28},"end":{"row":25,"column":29},"action":"insert","lines":["o"],"id":49}],[{"start":{"row":25,"column":28},"end":{"row":25,"column":29},"action":"remove","lines":["o"],"id":50}],[{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"remove","lines":["h"],"id":51}],[{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"remove","lines":["t"],"id":52}],[{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"remove","lines":["u"],"id":53}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["A"],"id":54}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"insert","lines":["A"],"id":55}],[{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"insert","lines":["U"],"id":56}],[{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"insert","lines":["T"],"id":57}],[{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"insert","lines":["H"],"id":58}],[{"start":{"row":25,"column":28},"end":{"row":25,"column":29},"action":"insert","lines":["O"],"id":59}],[{"start":{"row":25,"column":29},"end":{"row":25,"column":30},"action":"insert","lines":["R"],"id":60}],[{"start":{"row":25,"column":30},"end":{"row":25,"column":31},"action":"insert","lines":["S"],"id":61}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":9},"action":"insert","lines":["const int"],"id":62}],[{"start":{"row":13,"column":9},"end":{"row":13,"column":10},"action":"insert","lines":[" "],"id":63}],[{"start":{"row":13,"column":10},"end":{"row":13,"column":11},"action":"insert","lines":["M"],"id":64}],[{"start":{"row":13,"column":11},"end":{"row":13,"column":12},"action":"insert","lines":["A"],"id":65}],[{"start":{"row":13,"column":12},"end":{"row":13,"column":13},"action":"insert","lines":["X"],"id":66}],[{"start":{"row":13,"column":10},"end":{"row":13,"column":13},"action":"remove","lines":["MAX"],"id":67},{"start":{"row":13,"column":10},"end":{"row":13,"column":21},"action":"insert","lines":["MAX_AUTHORS"]}],[{"start":{"row":13,"column":20},"end":{"row":13,"column":21},"action":"remove","lines":["S"],"id":68}],[{"start":{"row":13,"column":19},"end":{"row":13,"column":20},"action":"remove","lines":["R"],"id":69}],[{"start":{"row":13,"column":18},"end":{"row":13,"column":19},"action":"remove","lines":["O"],"id":70}],[{"start":{"row":13,"column":17},"end":{"row":13,"column":18},"action":"remove","lines":["H"],"id":71}],[{"start":{"row":13,"column":17},"end":{"row":13,"column":18},"action":"insert","lines":["h"],"id":72}],[{"start":{"row":13,"column":18},"end":{"row":13,"column":19},"action":"insert","lines":["o"],"id":73}],[{"start":{"row":13,"column":19},"end":{"row":13,"column":20},"action":"insert","lines":["r"],"id":74}],[{"start":{"row":13,"column":20},"end":{"row":13,"column":21},"action":"insert","lines":["s"],"id":75}],[{"start":{"row":13,"column":20},"end":{"row":13,"column":21},"action":"remove","lines":["s"],"id":76}],[{"start":{"row":13,"column":19},"end":{"row":13,"column":20},"action":"remove","lines":["r"],"id":77}],[{"start":{"row":13,"column":18},"end":{"row":13,"column":19},"action":"remove","lines":["o"],"id":78}],[{"start":{"row":13,"column":17},"end":{"row":13,"column":18},"action":"remove","lines":["h"],"id":79}],[{"start":{"row":13,"column":17},"end":{"row":13,"column":18},"action":"insert","lines":["T"],"id":80}],[{"start":{"row":13,"column":18},"end":{"row":13,"column":19},"action":"insert","lines":["h"],"id":81}],[{"start":{"row":13,"column":19},"end":{"row":13,"column":20},"action":"insert","lines":["o"],"id":82}],[{"start":{"row":13,"column":19},"end":{"row":13,"column":20},"action":"remove","lines":["o"],"id":83}],[{"start":{"row":13,"column":18},"end":{"row":13,"column":19},"action":"remove","lines":["h"],"id":84}],[{"start":{"row":13,"column":17},"end":{"row":13,"column":18},"action":"remove","lines":["T"],"id":85}],[{"start":{"row":13,"column":17},"end":{"row":13,"column":18},"action":"insert","lines":["H"],"id":86}],[{"start":{"row":13,"column":18},"end":{"row":13,"column":19},"action":"insert","lines":["O"],"id":87}],[{"start":{"row":13,"column":19},"end":{"row":13,"column":20},"action":"insert","lines":["R"],"id":88}],[{"start":{"row":13,"column":10},"end":{"row":13,"column":20},"action":"remove","lines":["MAX_AUTHOR"],"id":89},{"start":{"row":13,"column":10},"end":{"row":13,"column":21},"action":"insert","lines":["MAX_AUTHORS"]}],[{"start":{"row":13,"column":21},"end":{"row":13,"column":22},"action":"insert","lines":["-"],"id":90}],[{"start":{"row":13,"column":21},"end":{"row":13,"column":22},"action":"remove","lines":["-"],"id":91}],[{"start":{"row":13,"column":21},"end":{"row":13,"column":22},"action":"insert","lines":["="],"id":92}],[{"start":{"row":13,"column":22},"end":{"row":13,"column":23},"action":"insert","lines":["2"],"id":93}],[{"start":{"row":13,"column":23},"end":{"row":13,"column":24},"action":"insert","lines":[";"],"id":94}],[{"start":{"row":13,"column":23},"end":{"row":13,"column":24},"action":"remove","lines":[";"],"id":95}],[{"start":{"row":13,"column":22},"end":{"row":13,"column":23},"action":"remove","lines":["2"],"id":96}],[{"start":{"row":13,"column":22},"end":{"row":13,"column":23},"action":"insert","lines":["3"],"id":97}],[{"start":{"row":13,"column":23},"end":{"row":13,"column":24},"action":"insert","lines":[";"],"id":98}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":13,"column":24},"end":{"row":13,"column":24},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1539068580405,"hash":"c5b8027e742560458c9926667a2e525ac40ea554"}