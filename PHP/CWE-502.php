<?php
// Имитируем ненадежные данные (могут поступать от пользователя или внешнего источника)
$untrusted_data = $_GET['data'];

// Десериализация ненадежных данных
$object = unserialize($untrusted_data);

// Пример использования десериализованного объекта
echo $object->someProperty;
?>