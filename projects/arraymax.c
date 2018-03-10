<!DOCTYPE html>
<!-- saved from url=(0103)https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?action=list&lang=c&show_result=True&name=91 -->
<html lang="en_US" class=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <!--<base href="https://onlinecourses.nptel.ac.in/noc18-cs10/">--><base href=".">
    
    <link rel="icon" href="https://storage.googleapis.com/static-prod-v11/modules/nptel/assets/img/favicon.ico">
    
    
  <title>
    Problem solving through Programming In C -
    
      
      Course
    
  </title>

    <!-- jQuery should be imported first -->
    <script src="./arraymax_files/cb=gapi.loaded_1" async=""></script><script async="" src="./arraymax_files/analytics.js.download"></script><script type="text/javascript" async="" src="./arraymax_files/plusone.js.download" gapi_processed="true"></script><script src="./arraymax_files/cb=gapi(1).loaded_0" async=""></script><script src="./arraymax_files/jquery.min.js.download"></script>
    <script src="./arraymax_files/registry.js.download"></script>


    <!-- The following translated strings are used in activity-generic.js and should be
    declared before that file is imported. -->
    <script>
      // inline translations
      var trans = {};

      
      trans.CHECK_ANSWER_TEXT =
          " Check Answer ";

      
      trans.CHECK_ANSWERS_TEXT =
          " Check Answers ";

      
      trans.SHOW_ANSWER_TEXT =
          " Skip and Show Answer ";

      
      trans.SAVE_ANSWERS_TEXT =
          " Save Answers ";

      
      trans.SAVE_DRAFT_TEXT =
          " Save Draft ";

      
      trans.SUBMIT_ANSWERS_TEXT =
          " Submit Answers ";

      
      trans.SUBMIT_ASSIGNMENT_TEXT =
          " Submit Assignment ";

      
      trans.SUBMIT_REVIEW_TEXT =
          " Submit Review ";

      
      trans.SELECT_ANSWER_PROMPT =
          " Please click one of the buttons for your answer. ";

      
      trans.ALL_CORRECT_TEXT =
          " All your answers are correct! ";

      
      trans.NUM_CORRECT_TEXT =
          " Number of questions you answered correctly ";

      
      trans.YOUR_SCORE_TEXT =
          " You received a score on this assessment of ";

      
      trans.LESSONS_TO_REVIEW_TEXT =
          " Here are lessons you could review to improve your score ";

      
      trans.PERFECT_SCORE_SAVE_TEXT =
          " Congratulations! Press the \&#39;Submit Answers\&#39; button to submit your grade. ";

      
      trans.GENERIC_SAVE_TEXT =
          " Press the \&#39;Submit Answers\&#39; button below to save your scores. You can also edit your answers above before clicking \&#39;Submit Answers\&#39;. ";

      
      trans.SUBMIT_ASSIGNMENT_CONFIRMATION =
          " Are you sure you want to submit this assignment? ";

      
      trans.SUBMIT_REVIEW_CONFIRMATION =
          " Are you sure you want to submit this review? ";

      
      trans.CONFIRMATION_EXPLANATION =
          " You cannot edit or delete it after you have done so. ";
    </script>

    
  <meta name="viewport" content="width=device-width, user-scalable=no">
  <link rel="icon" href="https://storage.googleapis.com/static-prod-v11/assets/img/favicon.ico">
  <link href="./arraymax_files/main.css" rel="stylesheet" type="text/css">
  <link href="./arraymax_files/nptel.css" rel="stylesheet" type="text/css">

  <link href="./arraymax_files/minimal.mobile.css" rel="stylesheet" type="text/css" media="only screen and (max-device-width: 1024px)">

  <!-- jQuery should be imported first -->
  <script src="./arraymax_files/jquery.min.js(1).download"></script>

  <script src="./arraymax_files/butterbar.js.download"></script>
  <link rel="stylesheet" type="text/css" href="./arraymax_files/butterbar.css" media="screen">
  <script src="./arraymax_files/main.js.download"></script>

  <script src="./arraymax_files/jsapi" type="text/javascript"></script>
  <script type="text/javascript">
    function addScript(src, callback) {
      var r = false;
      var existed = true;
      var element = document.getElementById(src);
      if (!element) {
        existed = false;
        element = document.createElement('script');
        element.src = src;
        element.type = 'text/javascript';
        element.setAttribute('id', src);
      }
      if (callback != null) {
        element.onload = element.onreadystatechagne = function() {
          if (!r && (!this.readyState || this.readyState == 'complete')) {
            r = true;
            callback();
          }
        }
      }
      if (!existed) document.body.appendChild(element);
    }
    function getStudentProgress() {
      
      ajax_server.get_progress();
      
    }
    function prettyfyCode() {
      prettyPrint();
    }
    function showButterBar() {
      
      var regConfirmationMsg = "Thank you for registering for the course. Click the Announcements tab for important information.";
      if(window.location.hash == '#registration_confirmation') {
        cbShowMsg(regConfirmationMsg);
        setTimeout(function() {cbHideMsg();}, 20000);
      }
      
      var regClosedMsg = "Registrations for this course are not open.";
      if(window.location.hash == '#registration_closed') {
        cbShowMsg(regClosedMsg);
        setTimeout(function() {cbHideMsg();}, 20000);
      }
    }
    function loadOtherJs(callback) {
      var c = getStudentProgress;
      if (null != callback) {
        c = function() {
           callback();
           getStudentProgress();
        }
      }
      addScript('https://storage.googleapis.com/static-prod-v11/assets/lib/google-code-prettify/prettify.js', prettyfyCode);
      addScript('https://storage.googleapis.com/static-prod-v11/modules/nptel/assets/js/activity-generic-1.3.js', null);
      addScript('https://storage.googleapis.com/static-prod-v11/modules/nptel/assets/js/main.js', c);
    }
    function downloadJsAtLoad() { loadOtherJs(null); }
    google.setOnLoadCallback(downloadJsAtLoad);
  </script>
 

  <script type="application/ld+json">
    {
      "@context": "http://schema.org",
      "@type": "Course",
      "@id": "https://onlinecourses.nptel.ac.in/noc18-cs10/",
      "name": "Problem solving through Programming In C",
      "description": "
 &lt;!--&lt;![endif]--&gt;

	&lt;meta charset=&#34;utf-8&#34;&gt;
	&lt;title&gt;&lt;/title&gt;
	&lt;meta name=&#34;viewport&#34; content=&#34;width=device-width, initial-scale=1.0&#34;&gt;
	&lt;link rel=&#34;stylesheet&#34; href=&#34;http://fonts.googleapis.com/css?family=Lato:400&#34;&gt;
	&lt;link rel=&#34;stylesheet&#34; href=&#34;http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,900&#34;&gt;
	&lt;style type=&#34;text/css&#34;&gt;
	body{
		/*height: 10000px;*/
		font-family: &#34;Lato&#34;;
		
	}
	.sticky-container{
		/*background-color: #333;*/
		padding: 0px;
		margin: 0px;
		position: fixed;
		right: -119px;
		top:130px;
		width: 200px;

	}

	.sticky li{
		list-style-type: none;
		background-color: #FFFFFF;
		color: #000000;
		height: 43px;
		padding: 0px;
		margin: 0px 0px 1px 0px;
		-webkit-transition:all 0.25s ease-in-out;
		-moz-transition:all 0.25s ease-in-out;
		-o-transition:all 0.25s ease-in-out;
		transition:all 0.25s ease-in-out;
		cursor: pointer;
		filter: url(&#34;data:image/svg+xml;utf8,&lt;svg xmlns=\&#39;http://www.w3.org/2000/svg\&#39;&gt;&lt;filter id=\&#39;grayscale\&#39;&gt;&lt;feColorMatrix type=\&#39;matrix\&#39; values=\&#39;0.3333 0.3333 0.3333 0 0 0.3333 0.3333 0.3333 0 0 0.3333 0.3333 0.3333 0 0 0 0 0 1 0\&#39;/&gt;&lt;/filter&gt;&lt;/svg&gt;#grayscale&#34;); 
                filter: gray; 
                -webkit-filter: white(100%); 

	}

	.sticky li:hover{
		margin-left: -115px;
	
		filter: url(&#34;data:image/svg+xml;utf8,&lt;svg xmlns=\&#39;http://www.w3.org/2000/svg\&#39;&gt;&lt;filter id=\&#39;grayscale\&#39;&gt;&lt;feColorMatrix type=\&#39;matrix\&#39; values=\&#39;1 0 0 0 0, 0 1 0 0 0, 0 0 1 0 0, 0 0 0 1 0\&#39;/&gt;&lt;/filter&gt;&lt;/svg&gt;#grayscale&#34;);
                -webkit-filter: grayscale(0%);
	}

	.sticky li img{
		float: left;
		margin: 5px 5px;
		margin-right: 10px;

	}

	.sticky li p{
		padding: 0px;
		margin: 0px;
		text-transform: uppercase;
		line-height: 43px;

	}

	/** content **/
	.content{
		margin-top: 150px;
		margin-left: 100px;
		width: 700px;
	}
	h1, h2{
		font-family: &#34;Source Sans Pro&#34;,sans-serif;
		color: #000000;
		padding: 0px;
		margin: 0px;
		font-weight: normal;
	}

	h1{
		font-weight: 900;
		font-size: 64px;
	}

	h2{
		font-size:26px;
	}

	p{
		color: #000000;
		font-family: &#34;Lato&#34;;
		line-height: 28px;
		font-size: 15px;
		padding-top: 50px;
	}

	p.credit{
		padding-top: 20px;
		font-size: 12px;
	}

	p a{
		color: #800000;
	}

	/** fork icon**/
	.fork{
		position: absolute;
		top:0px;
		left: 0px;
	}
	&lt;/style&gt;


	
	&lt;div class=&#34;sticky-container&#34;&gt;
		&lt;ul class=&#34;sticky&#34;&gt;
			&lt;li&gt;
				&lt;a href=&#34;https://www.facebook.com/NPTELNoc/&#34; target=&#34;_blank&#34;&gt;&lt;img width=&#34;32&#34; height=&#34;32&#34; title=&#34;&#34; alt=&#34;&#34; src=&#34;https://onlinecourses.nptel.ac.in/noc18_bt01/assets/img/fb1.png&#34;&gt;
				&lt;p&gt;Facebook&lt;/p&gt;&lt;/a&gt;
			&lt;/li&gt;
			&lt;li&gt;
				&lt;a href=&#34;https://twitter.com/nptelindia&#34; target=&#34;_blank&#34;&gt;&lt;img width=&#34;32&#34; height=&#34;32&#34; title=&#34;&#34; alt=&#34;&#34; src=&#34;https://onlinecourses.nptel.ac.in/noc18_bt01/assets/img/tw1.png&#34;&gt;
				&lt;p&gt;Twitter&lt;/p&gt;&lt;/a&gt;
			&lt;/li&gt;
			&lt;li&gt;
				&lt;a href=&#34;https://www.youtube.com/user/nptelhrd&#34; target=&#34;_blank&#34;&gt;&lt;img width=&#34;32&#34; height=&#34;32&#34; title=&#34;&#34; alt=&#34;&#34; src=&#34;https://onlinecourses.nptel.ac.in/noc18_bt01/assets/img/yt.png&#34;&gt;
				&lt;p&gt;Youtube&lt;/p&gt;&lt;/a&gt;
			&lt;/li&gt;
			&lt;li&gt;
				&lt;a href=&#34;https://www.linkedin.com/in/nptel-india-085866ba/&#34; target=&#34;_blank&#34;&gt;&lt;img width=&#34;32&#34; height=&#34;32&#34; title=&#34;&#34; alt=&#34;&#34; src=&#34;https://onlinecourses.nptel.ac.in/noc18_bt01/assets/img/li1.png&#34;&gt;
				&lt;p&gt;Linkedin&lt;/p&gt;&lt;/a&gt;
			&lt;/li&gt;
			&lt;li&gt;
				&lt;a href=&#34;https://plus.google.com/u/0/+nptelhrd&#34; target=&#34;_blank&#34;&gt;&lt;img width=&#34;32&#34; height=&#34;32&#34; title=&#34;&#34; alt=&#34;&#34; src=&#34;https://onlinecourses.nptel.ac.in/noc18_bt01/assets/img/g1.png&#34;&gt;
				&lt;p&gt;Google plus&lt;/p&gt;&lt;/a&gt;
			&lt;/li&gt;
		
		&lt;/ul&gt;
	&lt;/div&gt;
	

&lt;span style=&#34;color: rgb(0, 0, 191);&#34;&gt;&lt;b&gt;ABOUT THE COURSE&amp;nbsp;&lt;br&gt;&lt;/b&gt;&lt;/span&gt;&lt;span style=&#34;font-size: 10pt; text-align: justify;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;This
course is aimed at enabling the students to&lt;br&gt;&lt;/span&gt;&lt;div style=&#34;text-indent: 0px;&#34;&gt;&lt;span style=&#34;font-family: Symbol; text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;formulate
simple algorithms for arithmetic and logical problems&lt;br&gt;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;font-family: Symbol; text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;translate
the algorithms to programs (in C language)&lt;br&gt;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%; font-family: Symbol;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;test
and execute the programs and&amp;nbsp; correct
syntax and logical errors&lt;br&gt;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%; font-family: Symbol;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;implement
conditional branching, iteration and recursion&lt;br&gt;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%; font-family: Symbol;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;decompose
a problem into functions and synthesize a complete program using divide and
conquer approach&lt;br&gt;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%; font-family: Symbol;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%;&#34;&gt;&lt;span style=&#34;font-family: Arial, sans-serif;&#34;&gt;use
arrays, pointers and structures to formulate algorithms and programs&lt;br&gt;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%; font-family: Symbol;&#34;&gt;·&lt;span style=&#34;font-variant-numeric: normal; font-stretch: normal; font-size: 7pt; line-height: normal; font-family: &amp;quot;Times New Roman&amp;quot;;&#34;&gt;&amp;nbsp;&amp;nbsp;&lt;/span&gt;&lt;/span&gt;&lt;span style=&#34;text-indent: -9pt; font-size: 10pt; line-height: 115%; font-family: Arial, sans-serif;&#34;&gt;apply
programming to solve matrix addition and multiplication problems and searching
and sorting problems&amp;nbsp;&lt;br&gt;&lt;/span&gt;&lt;span style=&#34;font-family: Arial, sans-serif; font-size: 10pt; text-indent: -9pt;&#34;&gt;apply programming to
solve simple numerical method problems, namely rot finding of function,
differentiation of function and simple integration&lt;/span&gt;&lt;/div&gt;&lt;/span&gt;&lt;br&gt;&lt;b style=&#34;color: rgb(0, 0, 191);&#34;&gt;INTENDED AUDIENCE:&lt;/b&gt;&lt;br&gt;&lt;div style=&#34;text-align: justify;&#34; class=&#34;yui-wk-div&#34;&gt;&lt;ul&gt;&lt;li&gt;BE/BTech&amp;nbsp; in all disciplines&lt;/li&gt;&lt;li&gt;BCA/MCA/M. Sc&lt;br&gt;&lt;/li&gt;&lt;/ul&gt;&lt;/div&gt;&lt;b style=&#34;color: rgb(0, 0, 191);&#34;&gt;CORE/ELECTIVE:&lt;/b&gt;  Core &lt;br&gt;&lt;br&gt;&lt;b style=&#34;color: rgb(0, 0, 191);&#34;&gt;UG/PG:&amp;nbsp;&lt;/b&gt;&lt;span style=&#34;font-size:10.0pt;line-height:107%;
font-family:&amp;quot;Arial&amp;quot;,sans-serif;mso-fareast-font-family:Calibri;mso-fareast-theme-font:
minor-latin;mso-ansi-language:EN-US;mso-fareast-language:EN-US;mso-bidi-language:
AR-SA&#34;&gt;&lt;span style=&#34;font-size: 10pt; line-height: 107%;&#34;&gt;UG&amp;nbsp;&lt;/span&gt;&lt;br&gt;&lt;/span&gt;&lt;br&gt;&lt;b style=&#34;color: rgb(0, 0, 191);&#34;&gt;INDUSTRY SUPPORT : &lt;/b&gt;&lt;br&gt;&lt;div style=&#34;text-align: justify;&#34; class=&#34;yui-wk-div&#34;&gt;&lt;ul&gt;&lt;li&gt;All IT Industries&lt;br&gt;&lt;/li&gt;&lt;/ul&gt;&lt;/div&gt;",
      "provider": {
        "@type":"Organization",
        "name":"National Programme on Technology Enhanced Learning",
        "sameAs":"http://nptel.iitm.ac.in"
      },
      "grantsCredential": "False",
      "isAccessibleForFree" : "",

      "hasCourseInstance" : [
      {
        "inLanguage" : "en",
        "audioLanguage" : ["en"],
        "startDate" : "2018-01-22T00:00:00.000000Z",
        }
      ],
      
        "image" : "/modules/nptel/assets/img/nptel-logo.png",
      

      "partOfEducationalTrack" : [
        "/explorer/search?category=",
      ]
    }
  </script>


    

    

    <script>
      var eventXsrfToken = '1520320191/YeoOvGU3P6hTR-EViaJvVQ==';
      
        var gcbCanRecordStudentEvents = true;
      

      
        var transientStudent = false;
      
    </script>

    
      <script type="text/javascript" src="./arraymax_files/plusone.js(1).download" gapi_processed="true"></script>
    

    <script>
      function gcb_edit_hook_point(key) {
        window.location=('dashboard?action=edit_html_hook&key=' +
            encodeURIComponent(key));
      }
      $(function() {
        // TODO(nretallack): This duplicates code in
        // modules/dashboard/resources/js/view.js.
        function parseJson(s) {
          var xssiPrefix = ")]}'";
          return JSON.parse(s.replace(xssiPrefix, ''));
        }

        $("#locale-select").change(function() {
          var localeSelect = $("#locale-select");
          var request = JSON.stringify({
            xsrf_token: localeSelect.data("xsrf-token"),
            payload: {
              selected: localeSelect.val()
            }
          });
          $.ajax({
            url: "rest/locale",
            type: "POST",
            data: {request: request},
            dataType: "text",
            success: function(data) {
              data = parseJson(data);
              if (data.status == 200) {
                window.location.reload();
              }
            }
          });
        });
      });
    </script>

    
      
      
    

    </head><body data-gcb-page-locale="en_US"><div class="gcb-html-hook" id="base-before-head-tag-ends"><!-- base.before_head_tag_ends --></div>
  

  
    <div class="invisiblePopupDiv" id="termsDiv">
       <div class="gcb-pull-right">
       <a class="closeXButton" onclick="hidePopupDiv(&quot;termsDiv&quot;); return false;">X</a>
       </div>
       <iframe src="./arraymax_files/terms.html" class="popupIframe"></iframe>
      </div>
    <div class="invisiblePopupDiv" id="honorDiv">
       <div class="gcb-pull-right">
       <a class="closeXButton" onclick="hidePopupDiv(&quot;honorDiv&quot;); return false;">X</a>
       </div>
       <iframe src="./arraymax_files/honor_code.html" class="popupIframe"></iframe>
      </div>
    <div class="invisiblePopupDiv" id="faqDiv">
       <div class="gcb-pull-right">
       <a class="closeXButton" onclick="hidePopupDiv(&quot;faqDiv&quot;); return false;">X</a>
       </div>
       <iframe src="./arraymax_files/faq.html" class="popupIframe"></iframe>
    </div>

    <div class="gcb-html-hook" id="base-after-body-tag-begins"><!-- base.after_body_tag_begins --></div>

    
      <script>
        // Course-Builder specific setup for Google Tag Manager.  Iff
        // Tag Managers is enabled, the values in the dataLayer list of
        // dicts is made available to Tag Manager macros.
        dataLayer = [{
          'course_title': 'Problem solving through Programming In C',
          'event': 'default',  // Explicit value meaning not-really-set.
          }];

        function gcbSetPageInfo(dict) {
          dataLayer.push(dict);
        }

        // Invoke page-specific block so that any calls to gcbReportPageInfo()
        // are made before we hit the Tag Manager call, below.
        
        
      </script>

      
    

    <!-- ButterBar -->
    <div class="gcb-butterbar-container">
      <div id="gcb-butterbar-top" class="gcb-butterbar" style="margin-top:50px" aria-live="polite">
        <p id="gcb-butterbar-message"></p>
        <a id="gcb-butterbar-close">X</a>
      </div>
    </div>

    <!-- logo bar -->
     <div id="gcb-header" role="banner">
    <div class="gcb-header-aux">
      <div class="gcb-aux clearfix">
        <p class="gcb-course-image">
          <a id="gcb-header-logo" href="https://onlinecourses.nptel.ac.in/noc18-cs10/">
            
              <img src="./arraymax_files/nptel-logo.png" alt="NPTEL">
            
          </a>
        </p>

     
       <div class="gcb-username" onmouseover="showMenu()" onmouseout="hideMenu()">
          SUDHAansh@gmail.com <small>▼</small>
          
          <div class="gcb-profile" id="logout-div">
            
              
                <a href="https://onlinecourses.nptel.ac.in/profile">Profile</a>
              
            
            
            
            
            
            <a href="https://onlinecourses.nptel.ac.in/_ah/logout?continue=https://www.google.com/accounts/Logout%3Fcontinue%3Dhttps://appengine.google.com/_ah/logout%253Fcontinue%253Dhttps://onlinecourses.nptel.ac.in/noc18-cs10%26service%3Dah">
              
              Logout
            </a>
          </div>
       </div>
     
         </div>
      </div>
    </div>

    
  <!-- nav bar -->
  <div class="gcb-nav gcb-complex" id="gcb-nav-x">
    <div class="gcb-aux">
      <a class="gcb-nav-course-title" href="https://onlinecourses.nptel.ac.in/">Courses</a>
      <span class="gcb-nav-course-title">»</span>
      <a class="gcb-nav-course-title" href="https://onlinecourses.nptel.ac.in/noc18-cs10/course">Problem solving through Programming In C</a>
      <div class="gcb-pull-right"><ul class="clearfix">

        <!-- left-aligned links in order -->
        <div class="gcb-html-hook" id="base-after-navbar-begins"><!-- base.after_navbar_begins --></div>
        <li>
          
          <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/announcements">Announcements</a>
        </li>
        
        <li class="active">
          
          <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/course">Course</a>
        </li>
        
        
          <li>
            
            <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/forum">Ask a Question</a>
          </li>
        
        
          <li>
            
            <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/student/home">Progress</a>
          </li>
         
        
              <li>
                
                <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/student/mentor">Mentor</a>
              </li>
              
        
        
        

        <!-- right-aligned links are in order -->
        
        
          
            <!-- <li class="gcb-pull-right">
              
              <a href="/">My Courses</a>
            </li> -->
          
        
        <div class="gcb-html-hook" id="base-before-navbar-ends"><!-- base.before_navbar_ends --></div>
      </ul>
    </div>
  </div>
</div>


    <!-- top section -->

   <div id="gcb-main-body" class="clearfix">
    <div class="is-wrapper">
      <div class="gcb-aux">
        
        <div class="gcb-html-hook" id="base-after-top-content-ends"><!-- base.after_top_content_ends --></div>

        <!-- main section -->
        

<div id="gcb-main">
  
    



















<div class="gcb-nav" id="gcb-nav-left" role="navigation">
   <div class="gcb-aside">
  <h2>Course outline</h2>
    
      
        
          <div class="unit_navbar" id="unit_navbar_1">
  <div class="unit_heading" id="unit_heading_1" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_1&quot;)">
     How to access the portal </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_1">
    
            
              
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=1&amp;lesson=2">How to access the home page? </a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-2">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=1&amp;lesson=3">How to access the course page? </a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-3">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=1&amp;lesson=4">How to access the MCQ, MSQ and Programming assignments?</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-4">
</div>
      
    </div></li>
    
  
                
            
          
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_6">
  <div class="unit_heading" id="unit_heading_6" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_6&quot;)">
     Week 1 </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_6">
    
            
              
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=19">Lecture 1 : Introduction</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-19">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=20">Lecture 2: Idea of Algorithms</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-20">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=21">Lecture 3: Flow Chart and Pseudocode</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-21">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=22">Lecture 4 : Introduction to Programming Language Concepts</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-22">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=23">Lecture 5 : Variables and Memory</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-23">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=29">Feedback for Week 1</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-29">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/assessment?name=43">Quiz : Week 1 Assignment</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-43">
</div>
      
    </div></li>
  
                
            
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=6&amp;lesson=108">Week 1 Assignment Solution</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-108">
</div>
      
    </div></li>
    
  
                
            
          
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_7">
  <div class="unit_heading" id="unit_heading_7" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_7&quot;)">
     Week 2 </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_7">
    
            
              
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=24">Lecture 6 : Types of Software and Compilers</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-24">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=25">Lecture 7: Introduction to C Programming Language </a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-25">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=26">Lecture 8 : Variables and Variable Types in C</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-26">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=28">Lecture 9 : Introducing Functions</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-28">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=27">Lecture 10 : Address and Content of Variables and Types</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-27">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/assessment?name=46">Quiz : Week 2 Assignment</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-46">
</div>
      
    </div></li>
  
                
            
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=52">Feedback for week 2</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-52">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=7&amp;lesson=109">Week 2 Assignment Solution</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-109">
</div>
      
    </div></li>
    
  
                
            
          
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_8">
  <div class="unit_heading" id="unit_heading_8" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_8&quot;)">
     Week 3 </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_8">
    
            
              
      
  
      
  
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=8&amp;lesson=32">Lecture 11 : Assignment Statement and Operators in C</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-32">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=8&amp;lesson=31">Lecture 12 : Arithmetic Expressions and Relational Expressions</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-31">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=8&amp;lesson=33">Lecture 13 : Logical Operators and Change in Control Flow</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-33">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=8&amp;lesson=34">Lecture 14 : Use of Logical Operators in Branching</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-34">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=8&amp;lesson=35">Lecture 15 : Branching : IF - ELSE Statement</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-35">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
                
            
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/assessment?name=63">Quiz : Week 3 Assignment</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-63">
</div>
      
    </div></li>
  
                
            
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=8&amp;lesson=110">Week 3 Assignment Solution</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-110">
</div>
      
    </div></li>
    
  
                
            
          
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_9">
  <div class="unit_heading" id="unit_heading_9" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_9&quot;)">
     Week 4 </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_9">
    
            
              
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=67">Lecture 16: IF-ELSE Statement (Contd.)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-67">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=68">Lecture 17: Switch statement</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-68">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=69">Lecture 18: Switch Statement (Contd.) and Introduction to Loops</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-69">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=71">Lecture 19: Implementing Repetitions (Loops)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-71">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=72">Lecture 20: Implementation of Loops with for Statement (Contd.)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-72">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/assessment?name=64">Quiz : Week 4 Assignment</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-64">
</div>
      
    </div></li>
  
                
            
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=54">Feedback for week 4</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-54">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=9&amp;lesson=111">Week 4 Assignment Solution</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-111">
</div>
      
    </div></li>
    
  
                
            
          
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_10">
  <div class="unit_heading" id="unit_heading_10" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_10&quot;)">
     Week 5 </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_10">
    
            
              
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=10&amp;lesson=70">Lecture 21: For Statement (Contd.)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-70">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=10&amp;lesson=48">Lecture 22: Example of If-Else</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-48">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=10&amp;lesson=49">Lecture 23 : Example of Loops</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-49">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=10&amp;lesson=50">Lecture 24 : Example of Loops (Contd.)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-50">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=10&amp;lesson=51">Lecture 25 : Example of Loops (Contd.), Use of FOR Loops</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-51">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=10&amp;lesson=55">Feedback for week 5</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-55">
</div>
      
    </div></li>
    
  
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=78">W5_PA_Q1</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-78">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=79">W5_PA_Q2</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-79">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=80">W5_PA_Q3</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-80">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=81">W5_PA_Q4</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-81">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=82">W5_PA_Q5</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-82">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=83">W5_PA_Q6</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-83">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=84">W5_PA_Q7</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-84">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=85">W5_PA_Q8</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-85">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=86">W5_PA_Q9</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-86">
</div>
      
    </div></li>
  
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=87">W5_PA_Q10</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-87">
</div>
      
    </div></li>
  
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
                
            
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_11">
  <div class="unit_heading" id="unit_heading_11" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_11&quot;)">
     Week 6 </div>
    
      <ul class="subunit_navbar_current" id="subunit_navbar_11">
    
            
              
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=11&amp;lesson=73">Lecture 26: Introduction to Arrays</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-73">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=11&amp;lesson=74">Lecture 27: Arrays (Contd.)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-74">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=11&amp;lesson=75">Lecture 28: Arrays (Contd.)</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-75">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=11&amp;lesson=76">Lecture 29: Program using Arrays</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-76">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=11&amp;lesson=77">Lecture 30: Array Problem</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-77">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=11&amp;lesson=56">Feedback for week 6</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-56">
</div>
      
    </div></li>
    
  
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_current">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=91">W6_PA_Q1</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/in_progress.png" alt="In Progress" title="In Progress" class="gcb-progress-icon" id="progress-state-91">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=92">W6_PA_Q2</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-92">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=93">W6_PA_Q3</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-93">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=94">W6_PA_Q4</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-94">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=95">W6_PA_Q5</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-95">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=98">W6_PA_Q6</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-98">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=99">W6_PA_Q7</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-99">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=100">W6_PA_Q8</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-100">
</div>
      
    </div></li>
  
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=102">W6_PA_Q9</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-102">
</div>
      
    </div></li>
  
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=104">W6_PA_Q10</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-104">
</div>
      
    </div></li>
  
                
            
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_12">
  <div class="unit_heading" id="unit_heading_12" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_12&quot;)">
     Week 7 </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_12">
    
            
              
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=12&amp;lesson=112">Lecture 31 : Linear Search</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-112">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=12&amp;lesson=113">Lecture 32 : Character Array and Strings</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-113">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=12&amp;lesson=114">Lecture 33 : String Operations</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-114">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=12&amp;lesson=115">Lecture 34 : 2-D Array Operation</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-115">
</div>
      
    </div></li>
    
  
                
            
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=12&amp;lesson=116">Lecture 35 : Introducing Functions</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-116">
</div>
      
    </div></li>
    
  
                
            
                
            
          
          
        
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=12&amp;lesson=57">Feedback for week 7</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-html-57">
</div>
      
    </div></li>
    
  
                
            
          
          
        
          
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=117">W7_PA_Q1</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-117">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=118">W7_PA_Q2</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-118">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
                  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=121">W7_PA_Q4</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-121">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=122">W7_PA_Q5</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-122">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=123">W7_PA_Q6</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-123">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=124">W7_PA_Q7</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-124">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=125">W7_PA_Q8</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-125">
</div>
      
    </div></li>
  
                
            
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=126">W7_PA_Q9</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-126">
</div>
      
    </div></li>
  
                
            
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=127">W7_PA_Q10</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-127">
</div>
      
    </div></li>
  
                
            
                
            
          
        
          
          
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      
        <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?name=128">W7_PA_Q3</a>
      
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/not_started.png" alt="Not Started" title="Not Started" class="gcb-progress-icon" id="progress-state-128">
</div>
      
    </div></li>
  
                
            
          
        
      
  
      
  
      
  
      
  
      
  
      
  
      
  
            
          </ul></div>
        
      
    
      
    
      
    
      
    
      
    
      
    
      
        
          <div class="unit_navbar" id="unit_navbar_65">
  <div class="unit_heading" id="unit_heading_65" onclick="toggleSubUnitNavBar(&quot;subunit_navbar_65&quot;)">
     DOWNLOAD VIDEOS </div>
    
      <ul class="subunit_navbar_other" id="subunit_navbar_65">
    
            
              
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
  
      
        
          
            
                
                  
    <li class="subunit_other">
  <div class="gcb-left-activity-title-with-progress gcb-nav-pa">
      <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/unit?unit=65&amp;lesson=66">MP4,MP3,FLV,3GP FORMATS</a>
      
        <div class="gcb-progress-icon-holder"><img src="./arraymax_files/completed.png" alt="Completed" title="Completed" class="gcb-progress-icon" id="progress-state-html-66">
</div>
      
    </div></li>
    
  
                
            
          
          
        
      
  
            
          </ul></div>
        
      
    
      
        
      
    
      
        
      
    
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
      
        
      
    
    &nbsp;
  </div>

  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  

</div>
  

  <div class="gcb-article tab-content" role="main" style="margin-bot: 200px;">
    


    
<div>
  <h1 class="gcb-unit-header">
    
    W6_PA_Q1
  </h1>
</div>

    
<link href="./arraymax_files/codemirror.css" rel="stylesheet">
<script src="./arraymax_files/codemirror.js.download"></script>

  <script src="./arraymax_files/clike.js.download"></script>

<script src="./arraymax_files/registry.js.download"></script>

<script type="text/javascript">
var langSyntaxMap = {};
var langSyntaxModeMap = {};
var editorTheme = "eclipse";
var readonlyEditorTheme = "eclipse eclipse_disabled_style";

function createCodeMirrorEditor(div_id, read_only, first_line_number, lang){
  var theme = editorTheme;
  if (read_only) {
      theme = readonlyEditorTheme;
  }
  return CodeMirror.fromTextArea(document.getElementById(div_id),
    {"mode": langSyntaxModeMap[lang] , "theme":theme, "readOnly":read_only, "lineNumbers":true, "firstLineNumber": first_line_number});
}


  var first_line_number_c = 1;
  langSyntaxMap['c'] = 'clike';
  langSyntaxModeMap['c'] = 'text/x-csrc';

function onLangChoiceChange() {
  progLang = getSelectValue('prog-assignment-lang');
  
    element('prog-div-c').style.display = 'none';
  
  if (progLang != '') {
    element('prog-div-' + progLang).style.display = '';
  }
}
</script>

<link rel="stylesheet" type="text/css" href="./arraymax_files/prog.css">


  <div class="gcb-submission-due-date">
    Due on 2018-03-07, 23:59 IST
  </div>



  <div style="clear: both; padding-top: 2px;">
  
    <div style="display: inline-block;font-size:16px;padding-bottom: 7px;">
      <span style="font-size:12.0pt;line-height:107%;
font-family:&quot;Verdana&quot;,&quot;sans-serif&quot;;mso-fareast-font-family:Calibri;mso-fareast-theme-font:
minor-latin;mso-bidi-font-family:&quot;Courier New&quot;;mso-ansi-language:EN-IN;
mso-fareast-language:EN-US;mso-bidi-language:AR-SA">Write a C programme to find
the largest element of a given array.</span><br>
    </div>
    <div style="padding-bottom: 2px; clear: both;"></div>
    <div style=" width: 100%;">
      <div>
      
        <form id="gcb-submit-prog" action="https://onlinecourses.nptel.ac.in/noc18-cs10/progassignment?action=submit&amp;name=91" method="POST">
Select the Language for this assignment.
  <select id="prog-assignment-lang" name="prog-lang" onchange="onLangChoiceChange()">
    <option value="">--</option>
    
      
        <option value="c" selected="">C</option>
      
    
  </select>
<script type="text/javascript">

var RESET_CODE_RELOAD_PENDING = false;

function saveCode(unit_id, newFullCode) {
  var progLang = getSelectValue('prog-assignment-lang');
  var cm = window["cm_prog_input_" + progLang];
  if (newFullCode !== undefined && newFullCode !== null) {
      cm.setValue(newFullCode);
  }
  cm.save();
  updateInnerHTML('save-code-button', 'Saving ...');
  element('reset-code-button').disabled = true;
  element('save-code-button').disabled = true;
  element('submit-code-button').disabled = true;
  element('compile-code-button').disabled = true;
  var langId = 'prog-input-' + progLang;
  var filenameid = "prog-filename-" + progLang;
  data = {
    'prog-lang': progLang,
    'filename': element(filenameid).value,
    'prog-input': cm.getValue(),
    'name': unit_id,
  }
  ajax_server.save_code(data);
}
function resetCode(unit_id) {
  RESET_CODE_RELOAD_PENDING = true;
  saveCode(unit_id, '');
}
function onSaveSuccess() {
  if (RESET_CODE_RELOAD_PENDING) {
    location.reload();
    return;
  }
  updateInnerHTML('save-code-button', 'Save');
  element('reset-code-button').disabled = false;
  element('save-code-button').disabled = false;
  element('submit-code-button').disabled = false;
  element('compile-code-button').disabled = false;
}

installFunction('progassignment', 'save_code', onSaveSuccess, '1520320191/4B6uVkpDdcQJFVt3kqqy_Q==');
</script>
  <div style="width: 83%">
    
      <div id="prog-div-c" style="">
      
         <input name="filename-c" id="prog-filename-c" type="hidden" value="test.c">
      
      
        <textarea id="prefixed_code_c" style="display: none;">#include &lt;stdio.h&gt;
int main() 
{
int j, array[5];
for(j=0;j&lt;5;++j)
scanf("%d",&amp;array[j]); /*storing the elements of array from test case */
</textarea><div class="CodeMirror cm-s-eclipse cm-s-eclipse_disabled_style"><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 4px; left: 33px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" style="position: absolute; padding: 0px; width: 1000px; height: 1em; outline: none;" tabindex="0"></textarea></div><div class="CodeMirror-hscrollbar" style="left: 29px;"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-vscrollbar"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-scrollbar-filler"></div><div class="CodeMirror-gutter-filler"></div><div class="CodeMirror-scroll" tabindex="-1"><div class="CodeMirror-sizer" style="margin-left: 29px; min-width: 505.703px; min-height: 92px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines"><div style="position: relative; outline: none;"><div class="CodeMirror-measure"><div style="width: 50px; height: 50px; overflow-x: scroll;"></div></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors"><div class="CodeMirror-cursor" style="left: 4px; top: 0px; height: 12px;">&nbsp;</div></div><div class="CodeMirror-code" style=""><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">1</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-meta">#include &lt;stdio.h&gt;</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">2</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-keyword">int</span> <span class="cm-variable">main</span>() </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">3</div></div><pre class=""><span style="padding-right: 0.1px;">{</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">4</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-keyword">int</span> <span class="cm-variable">j</span>, <span class="cm-variable">array</span>[<span class="cm-number">5</span>];</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">5</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-keyword">for</span>(<span class="cm-variable">j</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">j</span><span class="cm-operator">&lt;</span><span class="cm-number">5</span>;<span class="cm-operator">++</span><span class="cm-variable">j</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">6</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-variable">scanf</span>(<span class="cm-string">"%d"</span>,<span class="cm-operator">&amp;</span><span class="cm-variable">array</span>[<span class="cm-variable">j</span>]); <span class="cm-comment">/*storing the elements of array from test case */</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">7</div></div><pre class=""><span style="padding-right: 0.1px;"><span>​</span></span></pre></div></div></div></div></div></div><div style="position: absolute; height: 30px; width: 1px; top: 92px;"></div><div class="CodeMirror-gutters" style="height: 92px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 28px;"></div></div></div></div>
        <script>
          var cm_prefixed_code_c = createCodeMirrorEditor(
	      'prefixed_code_c', true, 1, "c");
          first_line_number_c = (cm_prefixed_code_c).lineCount() + 1;
        </script>
      
      <textarea name="prog-input-c" id="prog-input-c" rows="40" style="width: 100%; display: none;">int i, largest=1;
for(i=0;i&lt;5;i++)
{
  if(array[i]&gt;1)
  {largest=a[i];
  }
  else
  {largest=1;}
  </textarea><div class="CodeMirror cm-s-eclipse"><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 4px; left: 33px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" style="position: absolute; padding: 0px; width: 1000px; height: 1em; outline: none;" tabindex="0"></textarea></div><div class="CodeMirror-hscrollbar" style="left: 29px;"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-vscrollbar"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-scrollbar-filler"></div><div class="CodeMirror-gutter-filler"></div><div class="CodeMirror-scroll" tabindex="-1"><div class="CodeMirror-sizer" style="margin-left: 29px; min-width: 124.719px; min-height: 116px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines"><div style="position: relative; outline: none;"><div class="CodeMirror-measure"><div class="CodeMirror-linenumber CodeMirror-gutter-elt"><div>16</div></div></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors"><div class="CodeMirror-cursor" style="left: 4px; top: 0px; height: 12px;">&nbsp;</div></div><div class="CodeMirror-code" style=""><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">8</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-keyword">int</span> <span class="cm-variable">i</span>, <span class="cm-variable">largest</span><span class="cm-operator">=</span><span class="cm-number">1</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">9</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-keyword">for</span>(<span class="cm-variable">i</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">i</span><span class="cm-operator">&lt;</span><span class="cm-number">5</span>;<span class="cm-variable">i</span><span class="cm-operator">++</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">10</div></div><pre class=""><span style="padding-right: 0.1px;">{</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">11</div></div><pre class=""><span style="padding-right: 0.1px;">  <span class="cm-keyword">if</span>(<span class="cm-variable">array</span>[<span class="cm-variable">i</span>]<span class="cm-operator">&gt;</span><span class="cm-number">1</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">12</div></div><pre class=""><span style="padding-right: 0.1px;">  {<span class="cm-variable">largest</span><span class="cm-operator">=</span><span class="cm-variable">a</span>[<span class="cm-variable">i</span>];</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">13</div></div><pre class=""><span style="padding-right: 0.1px;">  }</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">14</div></div><pre class=""><span style="padding-right: 0.1px;">  <span class="cm-keyword">else</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">15</div></div><pre class=""><span style="padding-right: 0.1px;">  {<span class="cm-variable">largest</span><span class="cm-operator">=</span><span class="cm-number">1</span>;}</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">16</div></div><pre class=""><span style="padding-right: 0.1px;">  </span></pre></div></div></div></div></div></div><div style="position: absolute; height: 30px; width: 1px; top: 116px;"></div><div class="CodeMirror-gutters" style="height: 300px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 28px;"></div></div></div></div>
      <script>
          var cm_prog_input_c = createCodeMirrorEditor(
              "prog-input-c", false, first_line_number_c, "c");
      </script>
      <input type="hidden" name="xsrf_token" value="1520320191/fRphJjeQVhDJH80eV8JkJw==">
      
        <textarea id="uneditable_code_c" style="display: none;"> printf("%d", largest); 
}
</textarea><div class="CodeMirror cm-s-eclipse cm-s-eclipse_disabled_style"><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 4px; left: 33px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" style="position: absolute; padding: 0px; width: 1000px; height: 1em; outline: none;" tabindex="0"></textarea></div><div class="CodeMirror-hscrollbar" style="left: 29px;"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-vscrollbar"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-scrollbar-filler"></div><div class="CodeMirror-gutter-filler"></div><div class="CodeMirror-scroll" tabindex="-1"><div class="CodeMirror-sizer" style="margin-left: 29px; min-width: 173px; min-height: 44px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines"><div style="position: relative; outline: none;"><div class="CodeMirror-measure"><div class="CodeMirror-linenumber CodeMirror-gutter-elt"><div>19</div></div></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors"><div class="CodeMirror-cursor" style="left: 4px; top: 0px; height: 12px;">&nbsp;</div></div><div class="CodeMirror-code"><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">17</div></div><pre class=""><span style="padding-right: 0.1px;"> <span class="cm-variable">printf</span>(<span class="cm-string">"%d"</span>, <span class="cm-variable">largest</span>); </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">18</div></div><pre class=""><span style="padding-right: 0.1px;">}</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -29px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">19</div></div><pre class=""><span style="padding-right: 0.1px;"><span>​</span></span></pre></div></div></div></div></div></div><div style="position: absolute; height: 30px; width: 1px; top: 44px;"></div><div class="CodeMirror-gutters" style="height: 44px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 28px;"></div></div></div></div>
        <script>
            var cm_uneditable_code_c =  createCodeMirrorEditor(
                'uneditable_code_c', true, first_line_number_c + cm_prog_input_c.lineCount(), 'c');
            cm_prog_input_c.on("change", function(c, ch){
                cm_uneditable_code_c.options.firstLineNumber = first_line_number_c + c.lineCount();
                cm_uneditable_code_c.refresh();
                }
            );
        </script>
      
      </div>
    
    
    <div>
      <div class="gcb-submit-only-once">
      
          You may submit any number of times before the due date. The final submission will be considered for grading.
      
      </div>
      <button type="submit" value="save" class="gcb-button gcb-prog-assignment-button gcb-pull-right" href="javascript:void(0);" id="reset-code-button" onclick="resetCode(&#39;91&#39;); return false;" target="_blank">
        Reset
      </button><button type="submit" name="btype" value="submit" class="gcb-button gcb-prog-assignment-button gcb-pull-right" id="submit-code-button">
        Submit</button>
      
      <button type="submit" name="btype" value="verify" class="gcb-button gcb-prog-assignment-button gcb-pull-right" id="compile-code-button">
        Compile &amp; Run</button>
      
      <button type="submit" value="save" class="gcb-button gcb-prog-assignment-button gcb-pull-right" href="javascript:void(0);" id="save-code-button" onclick="saveCode(&#39;91&#39;); return false;" target="_blank">
        Save
    </button></div>
    
    </div>
    </form></div>
    <br>
    <br>

        <div style="width: 83%; padding-top: 5px;">
          <div style="border: solid 1px grey;">
            <div style="padding-left:5px;">
              
              
                
                  <label style="font-size:15px;">
  <strong>Compilation :</strong>
</label>

  <label class="gcb-ouput-wrong" style="font-size:15px;">
    Failed
  </label>
  <div class="gcb-aside">
    
      Program <br>
    
      Programtest.c: In function main:
test.c:11:12: error: a undeclared (first use in this function)
   {largest=a[i];
            ^
test.c:11:12: note: each undeclared identifier is reported only once for each function it appears in
test.c:17:1: error: expected declaration or statement at end of input
 }
 ^
 <br>
    
  </div>

<br>
                  
                
              
            </div>
          </div>
        </div>
      
      <div class="gcb-button-box">
        <div class="gcb-next-button">
          
          <a href="https://onlinecourses.nptel.ac.in/noc18-cs10/course"> End </a>
        </div>
      </div>
    </div>
  

<script type="text/javascript">
onLangChoiceChange();
</script>

  </div>
    <script>
  
    showButterBar();
    </script>
</div>

        <div class="gcb-html-hook" id="base-after-main-content-ends"><!-- base.after_main_content_ends --></div>
      </div>
    </div>
    <div class="clear"></div>
  </div>
    <!-- footer section -->
  <div class="gcb-footer" id="gcb-footer">
        <div class="gcb-aux">
        <style>
  .gcb-terms-block2 {
          margin: auto;
    max-width: 500px;
          text-align: center;
  }
        </style>
        <div id="gcb-terms" class="gcb-terms-block2">
          <p>© 2014 NPTEL -
            <a onclick="showPopupDiv(&quot;termsDiv&quot;); return false;">
              
              Privacy &amp; Terms
            </a> -
            <a onclick="showPopupDiv(&quot;honorDiv&quot;); return false;">
              
              Honor Code
            </a> -
            <a onclick="showPopupDiv(&quot;faqDiv&quot;); return false;">
              
              FAQs
            </a>
            
              <script type="text/javascript">
              (function() {
               var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
               po.src = 'https://apis.google.com/js/plusone.js?onload=onLoadCallback';
               var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
               })();
              </script>
              - <span class="plusone-button" id="plusone-3" style="height: 20px; width: 70px; display: inline-block; text-indent: 0px; margin: 0px; padding: 0px; background-color: transparent; border-style: none; float: none; line-height: normal; font-size: 1px; vertical-align: top; background-position: initial initial; background-repeat: initial initial; ">
                <div id="___plusone_0" style="text-indent: 0px; margin: 0px; padding: 0px; background: transparent; border-style: none; float: none; line-height: normal; font-size: 1px; vertical-align: baseline; display: inline-block; width: 32px; height: 20px;"><iframe ng-non-bindable="" frameborder="0" hspace="0" marginheight="0" marginwidth="0" scrolling="no" style="position: static; top: 0px; width: 32px; margin: 0px; border-style: none; left: 0px; visibility: visible; height: 20px;" tabindex="0" vspace="0" width="100%" id="I0_1520320193514" name="I0_1520320193514" src="./arraymax_files/fastbutton.html" data-gapiattached="true" title="G+"></iframe></div>
              </span>
            
          </p>
        </div>
        </div>
      <div id="gcb-footer-global" role="contentinfo">
        <div class="gcb-aux">
          <div class="footer-logo-block">
            <section>
              <h3>A project of</h3>
                  <a href="http://nptel.iitm.ac.in/" target="_blank">
                  <img src="./arraymax_files/footer-logo-nptel.png">
                  </a>
            </section>
          </div>
          <div class="footer-logo-block">
            <section>
              <h3>In association with</h3>
                  <a href="http://www.nasscom.in/" target="_blank">
                  <img src="./arraymax_files/footer-logo-nasscom.png">
                  </a>
            </section>
          </div>
          <div class="footer-logo-block">
            <section>
              <h3>Funded by</h3>
                  <a href="http://mhrd.gov.in/" target="_blank">
                  <img src="./arraymax_files/footer-mhrd.png">
                  </a>
            </section>
          </div>
          <div class="footer-logo-block">
            <section>
              <h3>Powered by</h3>
                  <a href="http://www.google.com/" target="_blank">
                  <img src="./arraymax_files/footer-logo-google.png">
                  </a>
            </section>
          </div>
        </div>
      </div>
    </div>
    
    <script>
      (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
       (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
       m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
       })(window,document,'script','//www.google-analytics.com/analytics.js','ga');
      ga('create', 'UA-46447969-1', 'nptel.ac.in');
      ga('send', 'pageview');
    </script>
    
    <div class="gcb-html-hook" id="base-before-body-tag-ends"><!-- base.before_body_tag_ends --></div>

  
</div><iframe name="oauth2relay517131321" id="oauth2relay517131321" src="./arraymax_files/postmessageRelay.html" tabindex="-1" aria-hidden="true" style="width: 1px; height: 1px; position: absolute; top: -100px;"></iframe><script src="./arraymax_files/prettify.js.download" type="text/javascript" id="https://storage.googleapis.com/static-prod-v11/assets/lib/google-code-prettify/prettify.js"></script><script src="./arraymax_files/activity-generic-1.3.js.download" type="text/javascript" id="https://storage.googleapis.com/static-prod-v11/modules/nptel/assets/js/activity-generic-1.3.js"></script><script src="./arraymax_files/main.js.download" type="text/javascript" id="https://storage.googleapis.com/static-prod-v11/modules/nptel/assets/js/main.js"></script></body></html>