# 컬렉션 프레임워크(Collection Framework)

---



다수의 데이터를 쉽고 효과적으로 처리할 수 있는 표준화된 방법을 제공하는 클래스의 집합

컬렉션 프레임워크는 자바의 인터페이스(interface)를 사용하여 구현



## Set<E> 인터페이스 특징

- 순서가 없는 데이터의 집합으로, 데이터의 중복을 허용하지 않음
- 구현 클래스 예. HashSet, TreeSet



## 컬렉션 클래스(Collection Class)

* 컬렉션 프레임워크에 속하는 인터페이스를 구현한 클래스



## Set 컬렉션 클래스

**HashSet<E> 클래스**

- 해시 알고리즘(hash algorithm)을 사용하여 검색 속도가 매우 빠름

- HashSet 클래스는 내부적으로 HashMap 인스턴스를 이용하여 요소를 저장

- 요소의 저장 순서를 유지해야 한다면 JDK 1.4부터 제공하는 LinkedHashSet 클래스를 사용

- HashSet에서 add() 메소드를 사용하여 중복 없이 새로운 요소를 추가하기 위해서는 hashCode()와 equals() 메소드를 상황에 맞게 오버라이딩해야함

  ```java
  class Animal {
  
      String species;
  
      String habitat;
  
   
  
      Animal(String species, String habitat) {
  
      this.species = species;
  
      this.habitat = habitat;
  
  }
  
   
  
  public int hashCode() { return (species + habitat).hashCode(); }
  
      public boolean equals(Object obj) {
  
          if(obj instanceof Animal) {
  
              Animal temp = (Animal)obj;
  
              return species.equals(temp.species) && habitat.equals(temp.habitat);
  
          } else {
  
              return false;
  
          }
  
      }
  
  }
  
   
  
  public class Set02 {
  
      public static void main(String[] args) {
  
          HashSet<Animal> hs = new HashSet<Animal>();
  
   
  
          hs.add(new Animal("고양이", "육지"));
  
          hs.add(new Animal("고양이", "육지"));
  
          hs.add(new Animal("고양이", "육지"));
  
   
  
          System.out.println(hs.size());
  
      }
  
  }
  ```



##### Hash02_second.java

**startsWith()** 함수는 **대상 문자열이** **특정 문자** 또는 **문자열**로 **시작하는지 체크**하는 함수

**endsWith()** 함수는 **대상 문자열이** **특정 문자** 또는 **문자열**로 **끝나는지 체크**하는 함수

두 함수 모두 boolean 값에 따라 true/false 반환



##### Hash03.java

***getOrDefault***

default [V](https://docs.oracle.com/javase/8/docs/api/java/util/Map.html) getOrDefault([Object](https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html) key, [V](https://docs.oracle.com/javase/8/docs/api/java/util/Map.html) defaultValue)

찾는 키가 존재한다면 찾는 키의 값을 반환하고 없다면 기본 값을 반환한다.