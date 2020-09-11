# 数据库概要设计

## 1、 数据库模式

* User (id, password, id_ques[密保], id_ans); 	主键：id

* Relation (id, friended, comment); 	主键：id,friend

* Email (from_id, to_id, from_stat[0,1,2], to_stat[0,1,2], title, context,enclo_title[附件], enclo_id, time[排序]); 	主键：from_id, to_id, time

* Draft (from_id, to_id, title, context,enclo_title, enclo_id, edit_time); 	主键：from_id, edit_time

* Enclosure(enclo_id , context); 	主键：enclo_id

 

## 2、 数据库函数

载体类：

* User(id, password, id_ques[密保], id_ans);

* Mail(from_id, to_id, from_stat[0,1,2], to_stat[0,1,2], title, context,enclo_title[附件], enclo_id, time[排序]);

* Draft(from_id, to_id, title, context,enclo_title, enclo_id, edit_time);



工具类MySqlKit:

* User* Query_user_info(id); [添加用户前查询、登录、密保]

* Bool add_user_info(User); [添加用户]

* Friend* Query_friend(id); [朋友列表显示]

* Bool deal_friend(id ,friend, opt); [添加\删除朋友]

* Mail* query_mail(id, stat, pos); [邮件的分组]

* Bool add_mail(Mail); [发送成功则存储]

* Bool change_stat(Mail); [已读和删除]

* Draft* query_draft(id); [显示草稿]

* Bool Save_draft(Draft); [保存草稿]

* void* Query_enclo(endlo_id); [检查是否存在，存在则返回内容，不存在则上传]

 

 