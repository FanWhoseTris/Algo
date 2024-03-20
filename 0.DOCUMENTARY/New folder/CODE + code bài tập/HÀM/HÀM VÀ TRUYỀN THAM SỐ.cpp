
Trong quá trình giải quyết các bài toán lập trình, có những phần việc được thực hiện lặp đi lặp lại nhiều lần khiến ta phải viết lại các đoạn code giống nhau nhiều lần. Việc lặp đi lặp lại các đoạn code giống nhau không chỉ gây phiền toái cho lập trình viên, mà còn khiến cho chương trình lủng củng, khó hiểu, khó sửa chữa và nâng cấp.

Hàm là một chuỗi các lệnh dùng để thực hiện một công việc nào đó. Sử dụng hàm sẽ giúp chúng ta tránh được việc viết nhiều lần một đoạn code thực hiện chung một công việc bởi sau khi định nghĩa hàm, mỗi khi cần thực hiện phần việc đó, ta chỉ cần gọi tên hàm để nó thực thi.

Hơn nữa, với những bài toán lớn, ta có thể chia nhỏ thành các bài toán con và viết các hàm để giải quyết từng bài toán con rồi ghép lại thành chương trình hoàn thiện. Phương pháp chia để trị này không chỉ giúp code của chúng ta nhìn gọn gàng và dễ hiểu hơn, mà còn giúp lập trình viên kiểm soát tốt hơn quá trình chạy của chương trình, rất có lợi cho quá trình debug.

Hàm có thể nhận vào 0 hoặc nhiều tham số. Một hàm có thể trả về (return) một kết quả nào đó, hoặc không trả về gì cả (void).

Trong C++, cú pháp để định nghĩa hàm như sau:

return_type tên_hàm(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    // đoạn code thực thi công việc của hàm
    // [nếu return_type khác void]
    return một giá trị/biến thuộc kiểu return_type;
}
Trong đó:

return_type: kiểu dữ liệu của kết quả mà hàm trả về;
arg_i: tên tham số (đầu vào) thứ i của hàm;
arg_type_i: kiểu dữ liệu của arg_i.
Ví dụ, ta định nghĩa hàm sau đây để tính giá trị lớn nhất trong ba số nguyên:

int max_of_three(int a, int b, int c) {
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
}
Trong bài tập này, bạn sẽ được làm quen với cách truyền tham chiếu vào hàm. Trước tiên, hãy xem ví dụ sau:

#include <iostream>
using namespace std;

void change(int x) {
    x = x * 2;
}

int main() {
    int a = 5;
	
    cout << "Gia tri cua a truoc khi goi ham change: " << a << endl;
    change(a);
    cout << "Gia tri cua a sau khi goi ham change:   " << a;
	
    return 0;
}
Hàm change trong chương trình trên được viết với mục đích tăng giá trị của một số nguyên lên hai lần. Tuy nhiên, khi thực thi chương trình, ta nhận được kết quả như sau:

Gia tri cua a truoc khi goi ham change: 5
Gia tri cua a sau khi goi ham change:   5
Có thể thấy giá trị của biến a
 trước và sau khi gọi hàm change vẫn được giữ nguyên, mặc dù trong hàm change ta đã có tác động để thay đổi giá trị của tham số truyền vào. Mấu chốt vấn đề ở đây là cách chúng ta truyền tham số cho hàm. Cách mà đoạn code trên truyền tham số vào hàm change được gọi là truyền giá trị. Cụ thể, quá trình thực thi của đoạn code trên như sau:

Khi gọi change(a), giá trị của a
 (giá trị 5) được truyền vào hàm change;
Một biến mới int x được khởi tạo với giá trị bằng 5
;
Mọi hành vi được sử dụng trong hàm change sau đó chỉ tác động lên biến x
, do đó biến a không bị thay đổi gì khi kết thúc hàm change. Kể cả khi ta đặt tên tham số của hàm change là a
 thay vì x
 thì mọi thứ vẫn hoạt động như trên, ta có hai biến cùng tên a
 trong hai hàm change và hàm main, tuy nhiên chúng là hai thực thể khác nhau.
Để giải quyết vấn đề này, hàm change cần sử dụng một kiểu biến khác, đó là biến tham chiếu. Biến tham chiếu có thể được hiểu như "đại diện" của một biến khác. Khi sử dụng biến tham chiếu, ta sẽ truy cập trực tiếp vào vùng nhớ của biến được "đại diện", tức là mọi thay đổi trên biến tham chiếu cũng là những thay đổi trên biến được "đại diện". Để khai báo biến tham chiếu, ta chỉ cần thêm dấu & ở trước tên biến và sau kiểu dữ liệu. Ví dụ:

double a = 4.18;
double &x = a; // x = 4.18
x = 5.12;      // a = 5.12
a += 1;        // a = 6.12
               // x = 6.12
Như vậy, hàm change sẽ được sửa lại như sau:

void change(int &x) {
    x = x * 2;
}
Kết quả chạy chương trình sau khi sửa hàm change:

Gia tri cua a truoc khi goi ham change: 5
Gia tri cua a sau khi goi ham change:   10

- Hoặc cũng có thể truyền con trỏ vào hàm
void change( int *x)
{
    (*x)*=2;
}
int main()
{
    int a=100;
    change(&a)//Do  trỏ vào hàm change nên phải truyền địa chỉ của a = nội dung con trỏ x
    cout<<a<<endl;
    // giá trị a cũng thay đổi
    return 0;  
}