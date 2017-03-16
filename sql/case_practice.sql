select 
	sum ( case when status = 'Shipped' then 1 else 0 end ) as Shipped,
	sum ( case when status = 'Resolved' then 1 else 0 end ) as Resolved,
	sum ( case when status = 'Cancelled' then 1 else 0 end ) as Cancelled,
	sum ( case when status = 'On hold' then 1 else 0 end ) as On_hold,
	sum ( case when status = 'Disputed' then 1 else 0 end ) as Disputed,
	sum ( case when status = 'In process' then 1 else 0 end ) as in_process
from orders;
