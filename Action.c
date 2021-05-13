Action()
{
	char* randParam;
	
	lr_start_transaction("enter to site");
	
	web_reg_save_param_ex(
		"ParamName=charkod", 
    	"LB/IC=<a class=\'chara\' href='",
    	"RB/IC='>",
    	"Ordinal=all",
    	SEARCH_FILTERS,
        "Scope=body",
		LAST);

	web_url("slovardalja.net", 
		"URL={web}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

//	web_custom_request("1akds.json", 
//		"URL=http://newrrb.bid/1akds.json", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t3.inf", 
//		"Mode=HTML", 
//		"EncType=text/plain;charset=UTF-8", 
//		"Body={\"blocksId\":[\"9050\",\"148752\",\"149099\"],\"isAdBlock\":false,\"url\":\"http://slovardalja.net/\",\"v\":\"2.2.3-~~SHA~VERSION~STRING~~\",\"r\":\"qe5im9hsvy\",\"city\":null,\"region\":null,\"countryCode\":null,\"width\":1920,\"skip\":[],\"referrer\":\"http://no.domain/\",\"sessionReferrer\":\"http://no.domain/\"}", 
//		LAST);
//
//	web_url("1akds.json_2", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22start%22%2C%22ts%22%3A260%7D%5D&url=&v=2.2.3-a5b3115&r=qe5im9hsvy&referrer=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t4.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_3", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22loaded%22%2C%22ts%22%3A843%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A9050%2C%22ts%22%3A844%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A148752%2C%22ts%22%3A844%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A149099%2C%22ts%22%3A844%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A1087%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.3-a5b3115&r=qe5im9hsvy&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t5.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_4", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A1090%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A1144%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.3-a5b3115&r=qe5im9hsvy&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_5", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A1215%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.3-a5b3115&r=qe5im9hsvy&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t7.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_6", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A2228%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.3-a5b3115&r=qe5im9hsvy&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t9.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_7", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A2704%7D%5D&url=http%3A%2F%2Fslovardalja.net%2F&v=2.2.3-a5b3115&r=qe5im9hsvy&referrer=http%3A%2F%2Fno.domain%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t10.inf", 
//		"Mode=HTML", 
//		LAST);
	
	lr_save_string(lr_paramarr_random("charkod"),"randChar");

	lr_end_transaction("enter to site", LR_AUTO);
	
	/* Выбрал букву */
	
	lr_start_transaction("press letter");
	
	web_reg_save_param_ex(
		"ParamName=wordid", 
    	"LB/IC=width=\'25%\'><a class=\'chara\' href='",
    	"RB/IC='>",
    	"Ordinal=all",
    	SEARCH_FILTERS,
        "Scope=body",
		LAST);
	
	web_url("letter.php", 
		"URL={web}{randChar}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={web}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	

//	web_url("1akds.json_9", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22start%22%2C%22ts%22%3A160%7D%5D&url=&v=2.2.3-a5b3115&r=fd1zci8ad9&referrer=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t16.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_10", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22loaded%22%2C%22ts%22%3A291%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A9050%2C%22ts%22%3A292%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A148752%2C%22ts%22%3A292%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A149099%2C%22ts%22%3A292%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A457%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211&v=2.2.3-a5b3115&r=fd1zci8ad9&referrer="
//		"http%3A%2F%2Fslovardalja.net%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t17.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_11", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A459%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A645%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211&v=2.2.3-a5b3115&r=fd1zci8ad9&referrer=http%3A%2F%2Fslovardalja.net%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t19.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_12", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A682%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211&v=2.2.3-a5b3115&r=fd1zci8ad9&referrer=http%3A%2F%2Fslovardalja.net%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t20.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_13", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A1375%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211&v=2.2.3-a5b3115&r=fd1zci8ad9&referrer=http%3A%2F%2Fslovardalja.net%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t24.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_14", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A1834%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211&v=2.2.3-a5b3115&r=fd1zci8ad9&referrer=http%3A%2F%2Fslovardalja.net%2F", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t26.inf", 
//		"Mode=HTML", 
//		LAST);
	
	lr_save_string(lr_paramarr_random("wordid"),"randWord");
	
	lr_end_transaction("press letter",LR_AUTO);

	/* выбрал слово */
	
	lr_start_transaction("click word");

	web_reg_save_param_ex(
		"ParamName=result", 
		"LB/IC=            <p><strong>",
    	"RB/IC=</strong>",
    	"Ordinal=all",
    	SEARCH_FILTERS,
        "Scope=body",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=result1", 
		"LB/IC=</p><p>",
    	"RB/IC=</p>",
    	"Ordinal=all",
    	SEARCH_FILTERS,
        "Scope=body",
		LAST);
	
	web_url("word.php", 
		"URL={web}{randWord}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={web}{randChar}", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

//	web_url("1akds.json_15", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22start%22%2C%22ts%22%3A116%7D%5D&url=&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t30.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("1akds.json_16", 
//		"URL=http://newrrb.bid/1akds.json", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t31.inf", 
//		"Mode=HTML", 
//		"EncType=text/plain;charset=UTF-8", 
//		"Body={\"blocksId\":[\"9050\",\"148752\",\"149099\"],\"isAdBlock\":false,\"url\":\"http://slovardalja.net/word.php?wordid=40800\",\"v\":\"2.2.3-~~SHA~VERSION~STRING~~\",\"r\":\"6jawmpbysp\",\"city\":null,\"region\":null,\"countryCode\":null,\"width\":1920,\"skip\":[],\"referrer\":\"http://slovardalja.net/letter.php?charkod=211\",\"sessionReferrer\":\"http://no.domain/\"}", 
//		LAST);
//
//	web_url("1akds.json_17", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22loaded%22%2C%22ts%22%3A123%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A9050%2C%22ts%22%3A128%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A148752%2C%22ts%22%3A128%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A149099%2C%22ts%22%3A128%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t32.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_18", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A168%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A170%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t33.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_19", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A266%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t34.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_20", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A321%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t35.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_21", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A802%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t39.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_22", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A1372%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t42.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("1akds.json_23", 
//		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22dom%22%2C%22ts%22%3A2140%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fword.php%3Fwordid%3D40800&v=2.2.3-a5b3115&r=6jawmpbysp&referrer=http%3A%2F%2Fslovardalja.net%2Fletter.php%3Fcharkod%3D211", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://slovardalja.net/", 
//		"Snapshot=t45.inf", 
//		"Mode=HTML", 
//		LAST);
	
	lr_save_string(lr_eval_string("{result}"),"rsl");
	lr_output_message (lr_eval_string ("{rsl}"));
	
	lr_save_string(lr_eval_string("{result1}"),"rsl1");
	lr_output_message (lr_eval_string ("{rsl1}"));
	
	lr_end_transaction("click word",LR_AUTO);

	return 0;
}