### 정렬

###### K번째수

* Stream은 적재적소에 잘 사용해야 유용하다 (성능 문제)

* boxed()는 int요소, long요소, double요소를 Integer, Long, Double요소로 박싱해서 Stream을 생성

* Collectors.toList()는 스트림에서 작업한 결과를 담은 리스트로 반환

* Collections.sort(list)를 하면 오름차순으로 정렬, Collections.reverse(list)를 하면 내림차순으로 정렬

  * [Java에 내장된 정렬 함수 사용하기](https://yahwang.github.io/posts/61)

* copyOfRange() 메소드는 전달받은 배열의 특정 범위에 해당하는 요소만을 새로운 배열로 복사하여 반환

  * copyOfRange() 메소드는 첫 번째 매개변수로 복사의 대상이 될 원본 배열을 전달받음

  * 두 번째 매개변수로는 원본 배열에서 복사할 시작 인덱스를 전달받고, 세 번째 매개변수로는 마지막으로 복사될 배열 요소의 바로 다음 인덱스를 전달받음. 즉, 세 번째 매개변수로 전달된 인덱스 바로 전까지의 배열 요소까지만 복사됨

    (인덱스는 0부터 시작) 