## git_commit_72_symbols
Обучаясь работе в git, появилась идея написать программку которая будет следовать правилу «Сообщение комита не должно быть длиннее 72 символов»
Что реализовал в программке:
- При наборе сообщения допустимый длины в поле ввода и нажатии кнопки "Copy", происходит копирование набранного текста в буфер обмена с подстановкой его в готовую команду `git commit -m "Съешь ещё этих мягких французских булок, да выпей же чаю!"`, далее окно ввода очищается.
- При наборе сообщения превышающей 72 символа красит поле ввода красным цветом, кнопка Copy становиться не активна.
