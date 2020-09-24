// Author: @damienstanton
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <bits/stdc++.h>
using namespace std;

// explicit newline
const char ln = '\n';

// print just a message
void println(std::string msg) {
    std::cout << msg << ln;
}

// print a value prepended by a message
template <typename T>
void println(std::string msg, T t) {
    std::cout << msg << " " << t << ln;
}

// print just a value
template <typename T>
void println(T t) {
    std::cout << t << ln;
}

// convert a string to vector<char>
std::vector<char> str_to_vec(std::string s) {
	int n = s.length();
	std::vector<char> c(n);
	std::copy(s.begin(), s.end(), c.begin());
	return c;
}

// read values of `T` from stdin into a `vector<T>`
template <typename T>
std::vector<T> cin_to_vec(int n) {
    std::vector<T> res(n);
    if (n < 1)
        return std::vector<T>();
    for (auto& v : res)
        std::cin >> v;
    return res;
}

// a generic exception for simple assertions
template <typename T>
struct AssertionError : std::exception {
   private:
    std::string message;
    T want;
    T got;
    const char* what() const noexcept { return message.c_str(); }

   public:
    std::string cause() {
        std::stringstream ss;
        std::string msg = "| Error: " + (std::string)what();
        std::string underline = "\n| " + std::string(msg.size() - 2, '-');
        ss << msg << underline << "\n| Wanted: " << want << "\n| Got: " << got
           << ln;
        return ss.str();
    }

    AssertionError(T want, T got, std::string message)
        : message{message}, want{want}, got{got} {}
};


// assert that a given `want<T>` and `got<T>` are equal, otherwise print the
// failure message
template <typename T>
void assert_eq(T want, T got, std::string fail_msg) {
    if (want == got)
        return;
    else {
        throw AssertionError<T>(want, got, fail_msg);
    }
}

// read a file into a buffer
void readbuf(std::string path, std::stringstream& buf) {
    std::ifstream f;
    f.open(path);
    buf << f.rdbuf();
    f.close();
}

// write the contents of a buffer to a file
void writebuf(std::string path, std::stringstream& buf) {
    std::ofstream f;
    f.open(path);
    f << buf.rdbuf();
    f.close();
}

int main() {
    // TODO: START HERE
    println("OK");
}
