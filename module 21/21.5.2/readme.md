Задание 2. Модель данных для посёлка
Что нужно сделать
С помощью структур данных создайте подробную модель посёлка.

В посёлке множество участков, каждый имеет уникальный номер. На каждом участке должен быть расположен как минимум один жилой дом, но возможны и другие сооружения, такие как гараж, сарай (бытовка) и баня. Для каждого здания предусмотрена информация о площади, которую он занимает на участке.

В жилом доме может быть 1–3 этажа, на каждом из этажей — 2–4 комнаты: спальня, кухня, ванная, детская, гостиная. Для каждой комнаты предусмотрены данные о площади. Для каждого этажа также есть данные о высоте потолка. В жилом доме и бане может быть печь с трубой, информация об этом также должна быть предусмотрена в данных.

Для всех упомянутых сущностей надо объявить соответствующие структуры данных.

Вначале работы программы пользователь заполняет данные о посёлке: вводит общее количество участков и далее начинает детализировать каждый участок.

Для участка сначала заполняется общее количество построек, а затем детализируются постройки, этажи, комнаты на этажах.


По итогам введённых данных вы можете рассчитать суммарный параметр, например процент земли, занимаемой постройками, к общей площади всего посёлка. Главное в этой задаче — не операция подсчёта, а структуры данных.

Советы и рекомендации
Используйте все имеющиеся у вас знания о типах данных в C++. Можно использовать уже изученные перечисления и векторы, создавать структуры внутри структур и так далее.

Вам потребуется перечислять типы комнат и зданий подобным образом:

enum room_type 
{ 
    living, 
    children, 
    …

А затем использовать полученный тип внутри структуры. Алгоритм заполнения каждого объекта будет похож: создать объект нужного типа, ввести с клавиатуры значения, добавить полученный объект в вектор при помощи push_back.
