﻿#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    const string FLAG = "arctf{23j9Jf30wd94KJDthu}";

    // Вопросы и правильные ответы
    vector<pair<string, string>> questions = {
        {"Сколько уровней в Модели OSI?", "7"},
        {"Минимальная длина пароля для учетных записей в AD по умолчанию?", "7"},
        {"Назовите аббревиатуру атаки на веб-системы, заключающуюся во внедрении в выдаваемую веб-сервером страницу вредоносного кода.", "XSS"},
        {"Название центра, обеспечивающего координацию деятельности субъектов КИИ по вопросам обнаружения, предупреждения и ликвидации компьютерных атак.", "НКЦКИ"},
        {"Где собираются 'безопасники' в Адыгее для обсуждения лекций, готовятся к CTF и создают крутые вещи?", "https://t.me/arctf"},
    };

    // Проверка ответа на каждый вопрос
    for (auto question : questions) {
        string user_answer;
        cout << question.first << " ";
        getline(cin, user_answer);
        if (user_answer != question.second) {
            cout << "Ошибка! Неправильный ответ." << endl;
            return 0;
        }
    }

    // Если все ответы правильные, выводим флаг
    cout << "Молодец, ты наш герой, поздравляем! Вот твой флаг " << FLAG << endl;
    return 0;
}

