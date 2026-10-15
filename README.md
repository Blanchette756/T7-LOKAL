# Tugas 7 - Rekayasa Perangkat Lunak (RPL)

Repositori ini berisi pengerjaan tugas mingguan mata kuliah Rekayasa Perangkat Lunak (Minggu 7), mencakup perancangan antarmuka, pengujian kode, pemodelan sistem, dan dokumentasi kebutuhan perangkat lunak.

---

## 👤 Informasi Mahasiswa

| Informasi | Detail |
| :--- | :--- |
| **Nama** | **Rizky Rahmad Dani** |
| **NPM** | **2440304001** |
| **Mata Kuliah** | Rekayasa Perangkat Lunak (RPL) |
| **Tugas** | Minggu 7 (T7-LOKAL) |
| **Repository** | [Blanchette756/T7-LOKAL](https://github.com/Blanchette756/T7-LOKAL) |

---

## 📁 Struktur Direktori Proyek

```text
MINGGU 7/
└── PROYEK/
    ├── .gitignore                  # Berkas pengabaian file Git
    ├── README.md                   # Dokumentasi utama proyek
    ├── requirements/
    │   └── requirements.txt        # Spesifikasi kebutuhan fungsional & non-fungsional
    ├── src/
    │   └── Reve.html               # Halaman web landing page modern (HTML/CSS/JS)
    ├── test/
    │   └── test.C++                # Skrip unit test pengujian fungsional C++
    └── uml/
        └── uml.drawio              # Diagram Use Case pemodelan sistem berbasis Draw.io
```

---

## 🛠️ Deskripsi Modul & Berkas

1. **`src/Reve.html`**  
   Halaman antarmuka depan (*landing page*) interaktif bertema gelap dengan tipografi modern, efek visual *glassmorphism*, dan desain responsif.

2. **`test/test.C++`**  
   Modul pengujian otomatis (*unit testing*) menggunakan bahasa C++ untuk memverifikasi logika fungsi penjumlahan dan validasi masukan data akun.

3. **`uml/uml.drawio`**  
   Diagram Use Case arsitektur sistem yang memodelkan interaksi antara peran Pengguna (*User*) dan *Administrator* terhadap fungsionalitas sistem.

4. **`requirements/requirements.txt`**  
   Daftar spesifikasi kebutuhan sistem baik kebutuhan fungsional (*Functional Requirements*) maupun non-fungsional (*Non-Functional Requirements*).

---

## 🚀 Panduan Menjalankan

* **Membuka Antarmuka Web:**  
  Klik dua kali pada file `PROYEK/src/Reve.html` atau buka menggunakan browser pilihan Anda (Google Chrome, Edge, dll).
* **Melihat Diagram UML:**  
  Buka file `PROYEK/uml/uml.drawio` menggunakan ekstensi VS Code Draw.io Integration atau melalui web [diagrams.net](https://app.diagrams.net/).
* **Kompilasi Pengujian C++:**  
  ```bash
  g++ PROYEK/test/test.C++ -o test_output
  ./test_output
  ```

---
&copy; 2026 Rizky Rahmad Dani &bull; Rekayasa Perangkat Lunak

- Catatan: Branch Reve berhasil diintegrasikan ke sistem.
