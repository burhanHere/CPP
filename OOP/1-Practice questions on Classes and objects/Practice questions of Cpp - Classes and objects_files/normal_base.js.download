$(document).ready(function () {
  /* giving content width */

  function setCenterWidth() {
    if ($(window).outerWidth() >= 992) {
      var $content_width =
        $(window).width() -
        $("#div_left").outerWidth() -
        $("#div_right").outerWidth();
      $("#div_center").outerWidth($content_width);
    } else {
      $("#div_center").outerWidth($(window).width());
    }
  }

  setCenterWidth();

  $(window).resize(function () {
    setCenterWidth();
  });

  /* fixing navbar on top */

  $(window).resize(function () {
    $(window).scroll(function () {
      if ($(window).scrollTop() >= 80) {
        $("nav").addClass("fixnav");
      } else {
        $("nav").removeClass("fixnav");
      }
    });
  });

  $(window).scroll(function () {
    if ($(window).scrollTop() >= 80) {
      $("nav").addClass("fixnav");
    } else {
      $("nav").removeClass("fixnav");
    }
  });

  $(function () {
    $(window).scroll(function () {
      if ($("nav").css("position") === "fixed") {
        $(".text-center").css("padding-top", 74);
      } else {
        $(".text-center").css("padding-top", 0);
      }
    });
  });

  try {
    /* giving widths to ads parent div for center aligning */

    $(".leftnav").outerWidth($("#div_left").width());
    $(".leftnav300").outerWidth($("#div_left").width());
    $(".rightnav").width($("#div_right").width());
    $(".rightnav1").width($("#div_right").width());
    $(window).resize(function () {
      $(".leftnav").outerWidth($("#div_left").width());
      $(".leftnav300").outerWidth($("#div_left").width());
      $(".rightnav").width($("#div_right").width());
      $(".rightnav1").width($("#div_right").width());
    });

    /* affixing left bottom ad */

    $.fn.followTo = function () {
      var $this = this,
        $window = $(document);
      var fixed_and_absolute = false;
      var $leftadd_top =
        $(".leftnav").offset().top - $("nav").outerHeight() - 15;
      var $top_pos = $("#div_left").offset().top + $("#div_left").outerHeight();
      var $top_pos1 = $("#content").offset().top + $("#content").outerHeight();
      var $leftadd_bottom =
        $("#content").offset().top +
        $("#content").outerHeight() -
        $(".leftnav").outerHeight() -
        $("nav").outerHeight() +
        40;
      var $leftadd_bottom1 =
        $("#content").offset().top +
        $("#content").outerHeight() -
        $(".leftnav").outerHeight() -
        $("nav").outerHeight() -
        95;
      $window.scroll(function (e) {
        if ($top_pos < $top_pos1) {
          if (fixed_and_absolute) {
            $leftadd_bottom =
              $("#content").offset().top +
              $("#content").outerHeight() -
              $(".leftnav").outerHeight() -
              $("nav").outerHeight() +
              40;
            $leftadd_bottom1 =
              $("#content").offset().top +
              $("#content").outerHeight() -
              $(".leftnav").outerHeight() -
              $("nav").outerHeight() -
              95;
          }
          if (
            $window.scrollTop() > $leftadd_top &&
            $window.scrollTop() < $leftadd_bottom
          ) {
            if (!fixed_and_absolute) {
              $leftadd_top =
                $(".leftnav").offset().top - $("nav").outerHeight() - 15;
            }
            if ($window.scrollTop() > $leftadd_top) {
              $this.css({
                position: "fixed",
                top: 40,
              });
              fixed_and_absolute = true;
            }
          } else if ($window.scrollTop() >= $leftadd_bottom) {
            $this.css({
              position: "absolute",
              top: $leftadd_bottom1,
            });
          } else if ($window.scrollTop() < $leftadd_top) {
            $this.css({
              position: "static",
            });
            fixed_and_absolute = false;
          }
        } else {
          $this.css({
            position: "static",
          });
          fixed_and_absolute = false;
        }
      });
    };
    // $('.leftnav').followTo();
    // $(window).resize(function() {
    //     $('.leftnav').followTo();
    // });

    /* affixing right bottom ad */

    $.fn.followTo1 = function () {
      var $this = this,
        $window = $(document);
      var fixed_and_absolute = false;
      // var $leftadd_top = $('.rightnav').offset().top - $('nav').outerHeight() - 15;
      var $leftadd_top =
        $(".website_recent").offset().top +
        $(".website_recent").outerHeight() -
        $("nav").outerHeight() +
        10;
      var $top_pos =
        $("#div_right").offset().top + $("#div_right").outerHeight();
      var $top_pos1 = $("#content").offset().top + $("#content").outerHeight();
      var $leftadd_bottom =
        $("#content").offset().top +
        $("#content").outerHeight() -
        $(".rightnav").outerHeight() -
        $("nav").outerHeight() +
        40;
      var $leftadd_bottom1 =
        $("#content").offset().top +
        $("#content").outerHeight() -
        $(".rightnav").outerHeight() -
        $("nav").outerHeight() -
        71;
      $window.scroll(function (e) {
        $leftadd_top =
          $(".website_recent").offset().top +
          $(".website_recent").outerHeight() -
          $("nav").outerHeight() +
          10;
        if (fixed_and_absolute) {
          $leftadd_bottom =
            $("#content").offset().top +
            $("#content").outerHeight() -
            $(".rightnav").outerHeight() -
            $("nav").outerHeight() +
            40;
          $leftadd_bottom1 =
            $("#content").offset().top +
            $("#content").outerHeight() -
            $(".rightnav").outerHeight() -
            $("nav").outerHeight() -
            71;
        }
        if ($top_pos < $top_pos1) {
          if (
            $window.scrollTop() > $leftadd_top &&
            $window.scrollTop() < $leftadd_bottom
          ) {
            // if (!fixed_and_absolute) {
            // $leftadd_top = $('.rightnav').offset().top - $('nav').outerHeight() - 15;
            // }
            // if ($window.scrollTop() > $leftadd_top) {
            $this.css({
              position: "fixed",
              top: 43,
            });
            fixed_and_absolute = true;
            // }
          } else if ($window.scrollTop() >= $leftadd_bottom) {
            $this.css({
              position: "absolute",
              top: $leftadd_bottom1,
            });
          } else if ($window.scrollTop() < $leftadd_top) {
            $this.css({
              position: "static",
            });
            fixed_and_absolute = false;
          }
        } else {
          $this.css({
            position: "static",
          });
          fixed_and_absolute = false;
        }
      });
    };
    $(".rightnav").followTo1();
    $(window).resize(function () {
      $(".rightnav").followTo1();
    });

    /* affixing right bottom ad for right div width > 330 */

    $.fn.followTo2 = function () {
      var $this = this,
        $window = $(document);

      var fixed_and_absolute = false;
      // var $leftadd_top = $('.rightnav1').offset().top - $('nav').outerHeight() - 15;
      var $leftadd_top =
        $(".website_recent").offset().top +
        $(".website_recent").outerHeight() -
        $("nav").outerHeight() +
        10;
      var $top_pos =
        $("#div_right").offset().top + $("#div_right").outerHeight();
      var $top_pos1 = $("#content").offset().top + $("#content").outerHeight();
      var $leftadd_bottom =
        $("#content").offset().top +
        $("#content").outerHeight() -
        $(".rightnav1").outerHeight() -
        $("nav").outerHeight() +
        40;
      var $leftadd_bottom1 =
        $("#content").offset().top +
        $("#content").outerHeight() -
        $(".rightnav1").outerHeight() -
        $("nav").outerHeight() -
        71;

      $window.scroll(function (e) {
        $leftadd_top =
          $(".website_recent").offset().top +
          $(".website_recent").outerHeight() -
          $("nav").outerHeight() +
          10;
        if (fixed_and_absolute) {
          $leftadd_bottom =
            $("#content").offset().top +
            $("#content").outerHeight() -
            $(".rightnav1").outerHeight() -
            $("nav").outerHeight() +
            40;
          $leftadd_bottom1 =
            $("#content").offset().top +
            $("#content").outerHeight() -
            $(".rightnav1").outerHeight() -
            $("nav").outerHeight() -
            71;
        }
        if ($top_pos < $top_pos1) {
          if (
            $window.scrollTop() > $leftadd_top &&
            $window.scrollTop() < $leftadd_bottom
          ) {
            // if (!fixed_and_absolute) {
            //   $leftadd_top = $('.rightnav1').offset().top - $('nav').outerHeight() - 15;
            // }
            // if ($window.scrollTop() > $leftadd_top) {
            $this.css({
              position: "fixed",
              top: 43,
            });
            fixed_and_absolute = true;
            // }
          } else if ($window.scrollTop() >= $leftadd_bottom) {
            $this.css({
              position: "absolute",
              top: $leftadd_bottom1,
            });
          } else if ($window.scrollTop() < $leftadd_top) {
            $this.css({
              position: "static",
            });
            fixed_and_absolute = false;
          }
        } else {
          $this.css({
            position: "static",
          });
          fixed_and_absolute = false;
        }
      });
    };
    $(".rightnav1").followTo2();
    $(window).resize(function () {
      $(".rightnav1").followTo2();
    });
  } catch (err) {}

  /* donate box */
  $(".donate").on("click", function (event) {
    event.preventDefault();
    $("#donate").addClass("open");
  });
  $("#donate").on("click", function (event) {
    $(this).removeClass("open");
  });
  $("#close_donate").on("click", function (event) {
    $("#donate").removeClass("open");
  });
  $(document).keydown(function (event) {
    if (event.keyCode === 27) {
      $("#donate").removeClass("open");
    }
  });

  //question page jquery not working from there
  $("#return").click(function () {
    $("body", "html").animate(
      {
        scrollTop: $("#fake_location").offset().top,
      },
      1000
    );
  });

  $(".cc").mouseenter(function () {
    $();
  });
  $(".gly").mouseenter(function () {
    $(this).animate({ color: "#f20000" }, 100);
  });
  $(".gly").mouseleave(function () {
    $(this).animate({ color: "black" }, 100);
  });
  $(".gly").tooltip();
  $(".afacebook").mouseenter(function () {
    $(this).animate({ color: "#3b5998" }, 100);
  });
  $(".atwitter").mouseenter(function () {
    $(this).animate({ color: "#55acee" }, 100);
  });
  $(".apinterest").mouseenter(function () {
    $(this).animate({ color: "#cc2127" }, 100);
  });
  $(".alinkedin").mouseenter(function () {
    $(this).animate({ color: "#0000ff" }, 100);
  });
  $(".agoogle").mouseenter(function () {
    $(this).animate({ color: "#dd4b39" }, 100);
  });
  $(".afacebook,.atwitter,.apinterest,.alinkedin,.agoogle").mouseleave(
    function () {
      $(this).animate({ color: "white" }, 100);
    }
  );
  $(".aabout,.acourses,.atutorials,.adiscussion,.ahelp").mouseenter(
    function () {
      $(this).animate({ color: "#f20000" }, 50);
    }
  );
  $(".aabout,.acourses,.atutorials,.adiscussion,.ahelp").mouseleave(
    function () {
      $(this).animate({ color: "white" }, 50);
    }
  );

  $(".signupwindow").click(function () {
    //Getting the variable's value from a link
    var loginBox = $(this).attr("href");

    //Fade in the Popup
    $(loginBox).fadeIn(300);

    //Set the center alignment padding + border see css style
    var popMargTop = ($(loginBox).height() + 24) / 2;
    var popMargLeft = ($(loginBox).width() + 24) / 2;

    $(loginBox).css({
      "margin-top": -popMargTop,
      "margin-left": -popMargLeft,
    });

    // Add the mask to body
    $("body").append('<div id="mask"></div>');
    $("#mask").fadeIn(300);

    return false;
  });
  // When clicking on the button close or the mask layer the popup closed
  $(".close,#mask").on("click", function () {
    $("#mask,.signuppop,.loginpop").fadeOut(300, function () {
      $("#mask").remove();
    });
    return false;
  });

  $(".loginwindow").click(function () {
    //Getting the variable's value from a link
    var loginBox = $(this).attr("href");

    //Fade in the Popup
    $(loginBox).fadeIn(300);

    //Set the center alignment padding + border see css style
    var popMargTop = ($(loginBox).height() + 24) / 2;
    var popMargLeft = ($(loginBox).width() + 24) / 2;

    $(loginBox).css({
      "margin-top": -popMargTop,
      "margin-left": -popMargLeft,
    });

    // Add the mask to body
    $("body").append('<div id="mask"></div>');
    $("#mask").fadeIn(300);

    return false;
  });
  // When clicking on the button close or the mask layer the popup closed
  $("#a_login").click(function () {
    //Getting the variable's value from a link
    var loginBox = $(this).attr("href");
    $(".loginpop").fadeOut(300);
    //Fade in the Popup
    $(loginBox).fadeIn(300);

    //Set the center alignment padding + border see css style
    var popMargTop = ($(loginBox).height() + 24) / 2;
    var popMargLeft = ($(loginBox).width() + 24) / 2;

    $(loginBox).css({
      "margin-top": -popMargTop,
      "margin-left": -popMargLeft,
    });

    // Add the mask to body

    $("body").append('<div id="mask"></div>');
    $("#mask").fadeIn(300);

    return false;
  });
  $("#a_member").click(function () {
    //Getting the variable's value from a link
    var loginBox = $(this).attr("href");
    $(".signuppop").fadeOut(300);
    //Fade in the Popup
    $(loginBox).fadeIn(300);

    //Set the center alignment padding + border see css style
    var popMargTop = ($(loginBox).height() + 24) / 2;
    var popMargLeft = ($(loginBox).width() + 24) / 2;

    $(loginBox).css({
      "margin-top": -popMargTop,
      "margin-left": -popMargLeft,
    });

    // Add the mask to body

    $("body").append('<div id="mask"></div>');
    $("#mask").fadeIn(300);

    return false;
  });

  //For ajax
  $("#up").on("click", "#upvote", function () {
    var qslug;
    qslug = $(this).attr("data-qslug");
    $.get("/discussion/" + qslug + "/upvote/", function (data) {
      $("#upvote_count").html(data);
      //var div = ('#up').html();
      //$('#upvote').hide();
      $("#up").load("#up #in");
      //$('#up').html(div);
    });
  });

  $("#up").on("click", "#downvote", function () {
    var qslug;
    qslug = $(this).attr("data-qslug");
    $.get("/discussion/" + qslug + "/downvote/", function (data) {
      $("#upvote_count").html(data);
      //var div = ('#up').html();
      //$('#downvote').hide();
      $("#up").load("#up #in");
      //$('#up').html(div);
    });
  });

  $("#interest").on("click", "#interested", function () {
    var qislug;
    qislug = $(this).attr("data-qislug");
    $.get("/discussion/" + qislug + "/interested/", function (data) {
      $("#interested_count").html(data);
      $("#interest").load("#interest #in_in");
    });
  });

  $("#interest").on("click", "#uninterested", function () {
    var qislug;
    qislug = $(this).attr("data-qislug");
    $.get("/discussion/" + qislug + "/uninterested/", function (data) {
      $("#interested_count").html(data);
      $("#interest").load("#interest #in_in");
    });
  });

  $(".a").on("click", ".ans_downvote", function () {
    var qslug;
    qslug = $(this).attr("data-qslug");
    aid = $(this).attr("data-aid");

    $.get(
      "/discussion/" + qslug + "/answer_downvote/?answer_id=" + aid,
      function (data) {
        $("#" + aid).html(data);
        var a = "#" + aid + "up ." + aid + "in";
        $("." + aid).load(a);
      }
    );
  });

  $(".a").on("click", ".ans_upvote", function () {
    var qslug;
    qslug = $(this).attr("data-qslug");
    aid = $(this).attr("data-aid");

    $.get(
      "/discussion/" + qslug + "/answer_upvote/?answer_id=" + aid,
      function (data) {
        $("#" + aid).html(data);
      }
    );
    var a = "#" + aid + "up ." + aid + "in";
    $("." + aid).load(a);
  });

  //ajax notification
  $("#not_mark").click(function () {
    $.get("/notifications/allread", function (data) {
      $("#a").load("#a #b");
    });
  });

  var $animation_element = $(".mssg_div");
  var $window = $(window);

  function check_if_in_view() {
    var window_height = $window.height();
    var window_top_position = $window.scrollTop();
    var window_bottom_position = window_top_position + window_height;

    $.each($animation_element, function () {
      var $element = $(this);
      var element_height = $element.outerHeight();
      var element_top_position = $element.offset().top;
      var element_bottom_position = element_top_position + element_height;

      if (
        element_bottom_position >= window_top_position &&
        element_top_position <= window_bottom_position
      ) {
        $element.addClass("in-view");
      } else {
        $element.removeClass("in-view");
      }
    });
  }

  $window.on("scroll resize", check_if_in_view);
  $window.trigger("scroll");

  /* output code */
  $(".lang_ul > li").hover(function (event) {
    // tab
    var active_tab = $(this).parent().nextAll().find("li.active-tab");
    active_tab.removeClass("active-tab");
    $(this).parent().find("li.active-tab").removeClass("active-tab");
    var classname = "." + $(this).attr("class");
    $(this).addClass("active-tab");
    $(this).parent().nextAll().children(classname).addClass("active-tab");

    //pre
    var active_pre = $(this).parent().nextAll().find(".active-code");
    if ($(this).hasClass("tab-c")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this).parent().nextAll().find(".code-c").removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-c").addClass("active-code");
    }
    if ($(this).hasClass("tab-python")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this)
        .parent()
        .nextAll()
        .find(".code-python")
        .removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-python").addClass("active-code");
    }
    if ($(this).hasClass("tab-cpp")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this).parent().nextAll().find(".code-cpp").removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-cpp").addClass("active-code");
    }
    if ($(this).hasClass("tab-java")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this).parent().nextAll().find(".code-java").removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-java").addClass("active-code");
    }
    if ($(this).hasClass("tab-ruby")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this).parent().nextAll().find(".code-ruby").removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-ruby").addClass("active-code");
    }
    if ($(this).hasClass("tab-chash")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this).parent().nextAll().find(".code-chash").removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-chash").addClass("active-code");
    }
    if ($(this).hasClass("tab-perl")) {
      active_pre.removeClass("active-code");
      active_pre.addClass("hidden-code");
      $(this).parent().nextAll().find(".code-perl").removeClass("hidden-code");
      $(this).parent().nextAll().find(".code-perl").addClass("active-code");
    }

    //showing default active pre and li tag when selected tag is unavailable
    $(".lang_ul").each(function (i) {
      var flag = 0;
      $(this)
        .find("li")
        .each(function (j) {
          if ($(this).hasClass("active-tab")) {
            flag = 1;
          }
        });
      if (flag == 0) {
        $(this).find(".tab-c").addClass("active-tab");
        $(this).next().find("pre:first").removeClass("hidden-code");
        $(this).next().find("pre:first").addClass("active-code");
      }
    });
  });

  $(".button_output").click(function (event) {
    var result = $(this).parent().next().find(".code_out_new");
    if (result.hasClass("hidden-result")) {
      result.removeClass("hidden-result");
    } else {
      result.addClass("hidden-result");
    }
  });

  /* to trigger click action on courses tab in navbar */

  $("#dropcourses").hover(function () {
    $("#nav_courses", this).toggleClass("disabled");
  });
});

/* ******************** */
