create table if not exists USERS (id identity primary key, name varchar (255) not null);
truncate table USERS;
insert into USERS (name) values ('Bhoumik');
insert into USERS (name) values ('Shah');