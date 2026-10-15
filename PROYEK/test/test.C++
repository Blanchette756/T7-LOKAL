#include <iostream>
#include <string>
#include <vector>
#include <cassert>

// Fungsi sederhana yang akan diuji
int tambah(int a, int b) {
    return a + b;
}

bool isValidUsername(const std::string& username) {
    // Username harus memiliki panjang minimal 4 karakter
    return username.length() >= 4;
}

// Struktur pengujian sederhana
struct TestCase {
    std::string testName;
    bool passed;
};

void runAllTests() {
    std::vector<TestCase> results;

    std::cout << "========================================" << std::endl;
    std::cout << "      MENJALANKAN UNIT TESTING (RPL)    " << std::endl;
    std::cout << "========================================" << std::endl;

    // Test 1: Penjumlahan
    bool test1 = (tambah(3, 7) == 10);
    results.push_back({"Test Penjumlahan Dasar (3 + 7 == 10)", test1});

    // Test 2: Validasi Username
    bool test2 = isValidUsername("admin") == true;
    results.push_back({"Test Valid Username ('admin' valid)", test2});

    // Test 3: Validasi Username Terlalu Pendek
    bool test3 = isValidUsername("abc") == false;
    results.push_back({"Test Invalid Username ('abc' invalid)", test3});

    // Cetak Hasil
    int passedCount = 0;
    for (const auto& test : results) {
        std::cout << "[" << (test.passed ? "PASSED" : "FAILED") << "] " 
                  << test.testName << std::endl;
        if (test.passed) passedCount++;
    }

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Ringkasan: " << passedCount << "/" << results.size() 
              << " pengujian berhasil." << std::endl;
    std::cout << "========================================" << std::endl;
}

int main() {
    runAllTests();
    return 0;
}
