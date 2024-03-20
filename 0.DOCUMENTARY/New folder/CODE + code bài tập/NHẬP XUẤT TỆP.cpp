// NHẬP XUẤT VỚI TỆP
// phải theo ĐÚNG formart đề 
// Hệ thống thư mục và file (tệp)

//Khi dữ liệu lớn dần, bạn cần phải tìm cách lưu trữ và truy xuất dữ liệu từ các thiết bị lưu trữ để sử dụng lâu dài. Trong bài này, ta sẽ học cách đọc một file (tệp) văn bản từ ổ đĩa (drives).

// File là một đơn vị lưu trữ đối với hệ điều hành. Hệ điều hành chia các ổ đĩa bằng hệ thống cây thư mục (folder/directory tree structure). Thư mục gốc chính là ổ đĩa, mỗi thư mục bao gồm nhiều thư mục con và các file, mỗi thư mục con lại bao gồm nhiều thư mục con khác và các file khác. Cứ như vậy, các thư mục và các file tạo thành một hệ thống cây thư mục.

// Đọc file văn bản
// File được chia thành 2 loại: file văn bản và file nhị phân. File văn bản là file chứa dữ liệu văn bản mà con người có thể đọc trực tiếp bằng mắt thường giống như khi đọc dữ liệu trên màn hình hoặc khi nhập dữ liệu từ bàn phím. Trong C++, việc đọc file văn bản được hỗ trợ bởi thư viện <fstream> thông qua các đối tượng thuộc lớp ifstream. Để sử dụng thư viện <fstream>, bạn sử dụng lệnh #include

#include <fstream>
// Mở file
// // Trước khi đọc file, bạn cần yêu cầu hệ điều hành mở file đó ra. Với C++, bạn sẽ khai báo một biến (đối tượng) thuộc lớp ifstream và cung cấp đường dẫn đến file hoặc sử dụng phương thức open(). Ví dụ:

ifstream file("myfile.txt");
// hoặc

ifstream file;
file.open("myfile.txt");

// Để kiểm tra một file đã được mở một cách suôn sẻ, bạn sử dụng phương thức is_open()

if (file.is_open()) {
    cout << "File is opened.\n";
} else {
    cout << "Error, file is not opened.\n";
}
// Đọc dữ liệu
// Khi file đã được mở, bạn có thể sử dụng các lệnh, các toán tử giống như bạn vẫn thường làm với đối tượng cin để đọc dữ liệu. Ví dụ, để đọc một số nguyên, bạn dùng toán tử >>. Để đọc một dòng, bạn dùng hàm getline(). Ví dụ

ifstream file("myfile.txt");
if (file.is_open()) {
    string line;
    getline(file, line);   // đọc một dòng văn bản
    int intVal;
    file >> intVal;        // đọc một số nguyên
}
// Một điểm cần lưu ý khi thao tác với file là bạn cần kiểm tra xem thao tác truy xuất vừa tiến hành có lỗi hay không. Để kiểm tra, hãy sử dụng đối tượng ifstream như một biến bool. Nếu biến này là true thì thao tác vừa tiến hành suôn sẻ, không có lỗi, dữ liệu đọc vào không có vấn đề gì. Nếu biến này là false, bạn không nên sử dụng dữ liệu vừa đọc vì vừa có một lỗi gì đó trong quá trình truy xuất file.

ifstream file("myfile.txt");
string line;
getline(file, line);  // đọc một dòng văn bản
if (file) {
    cout << "A line is read: " << line << endl;
}
// Đọc toàn bộ file
// Một file có thể có nhiều dữ liệu, có nhiều dòng. Để đọc toàn bộ dữ liệu, bạn cần đưa các lệnh đọc vào một vòng lặp với điều kiện vòng lặp là còn chưa hết file sử dụng phương thức eof(). Ví dụ, để đọc toàn bộ các số nguyên trong file vào một mảng vector, bạn có thể viết

ifstream file("myfile.txt");
if (file.is_open()) {
    vector<int> arr;
    while (!file.eof()) {
        int val;
        file >> val;
        if (file) arr.push_back(val);
        else break;
    }
}