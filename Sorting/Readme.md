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

###### 가장 큰 수

# Comparable, Comparator 인터페이스

---

자바에서 객체 간의 정렬 기준을 명시하는데는 두 가지 방법이 있다.

한 가지는 **Comparable 인터페이스**를 이용하는 것이고,

다른 한 가지는 **Comparator 인터페이스**를 이용하는 것이다.

## Comparable 인터페이스

---

- Comparable 인터페이스는 Natural Order(자연 정렬)을 구현하고 있으며
```
'Natural Order"

보통 작은수에서 큰수로, 알파벳 순서대로, 가나다 순서대로 정렬하는 것을 의미
```

- Comparable 인터페이스를 구현하는 클래스에 의해 만들어진 객체의 정렬 규칙은 고정적임(정렬 규칙을 고정적으로 갖게됨)
- 클래스에 규칙을 하나 정해놓고 누군가 정렬하라고 한다면 그 객체는 규칙대로 정렬을 수행
- 해당 규칙은 객체를 정렬하는 데 사용되는 메소드인 compareTo() 메소드에 정의

```java
class Friend implements Comparable<Friend> {
	private String name;
	private int age;

	public Friend(String name, int age) {
		this.name = name;
		this.age = age;
	}

	@Override
	public int compareTo(Friend friend) {
		//오름차순 정렬
		if(this.age > friend.age) {
			return 1;
		} else if(this.age == friend.age) {
			return 0;
		} else {
			return -1;
		}
	}
}
```

- 정렬할 객체에 Comparable interface를 implements 후, compareTo() 메서드를 오버라이드하여 구현한다.
- compareTo() 메서드 작성법
    - 현재 객체 < 파라미터로 넘어온 객체: 음수 리턴
    - 현재 객체 == 파라미터로 넘어온 객체: 0 리턴
    - 현재 객체 > 파라미터로 넘어온 객체: 양수 리턴

음수 또는 0이면 객체의 자리가 그대로 유지되며, 양수인 경우에는 두 객체의 자리가 바뀐다.

그렇다면 기본 정렬 기준과 다르게 정렬하고 싶다면?

Comparator 인터페이스 사용

## Comparator 인터페이스

---

- 정렬 가능한 클래스(Comparable 인터페이스를 구현한 클래스)들의 기본 정렬 기준과 다르게 정렬 하고 싶을 때 사용하는 인터페이스
- 주로 익명 클래스로 사용됨

```java
class FriendSortedByName implements Comparator<Friend> {
	@Override
	public int compare(Friend friend1, Friend friend2) {
		return friend1.name.compareTo(friend2.name);
	}
}

```

- 정렬할 객체에 Comparator interface를 implements 후, compare() 메서드를 오버라이드하여 구현한다.
- compare() 메서드 작성법
    - 첫 번째 파라미터로 넘어온 객체 < 두 번째 파라미터로 넘어온 객체: 음수 리턴
    - 첫 번째 파라미터로 넘어온 객체 == 두 번째 파라미터로 넘어온 객체: 0 리턴
    - 첫 번째 파라미터로 넘어온 객체 > 두 번째 파라미터로 넘어온 객체: 양수 리턴

음수 또는 0이면 객체의 자리가 그대로 유지되며, 양수인 경우에는 두 객체의 자리가 바뀐다.

- sort() 메서드의 두 번째 인자로 Comparator interface를 implements한 객체를 받는다
```
Arrays.sort(배열 참조 변수, new FriendSortedByName() ), Collections.sort(컬렉션 참조 변수, new FriendSortedByName())
```
## Reference

[[Java] Comparable와 Comparator의 차이와 사용법 - Heee's Development Blog](https://gmlwjd9405.github.io/2018/09/06/java-comparable-and-comparator.html)

[Comparable / Comparator 인터페이스 차이점](https://dev-daddy.tistory.com/23)

[자바 Comparable, Comparator 하면 '정렬'을 떠올려라, 자바 객체 정렬의 '기준'을 정하는 방법! (비교랑 다릅니다!)](https://jeong-pro.tistory.com/173)



