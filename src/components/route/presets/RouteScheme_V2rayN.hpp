#pragma once
#include "components/route/RouteSchemeIO.hpp"

// You should not "use namespace" on this namespace
namespace Qv2ray::components::route::presets::v2rayN
{
    // v2rayN scheme from 2dust/v2rayCustomRoutingList
    // License: GPL3
    const inline QList<QString> DomainsDirect //
        { "domain:12306.com",
          "domain:51ym.me",
          "domain:52pojie.cn",
          "domain:8686c.com",
          "domain:abercrombie.com",
          "domain:adobesc.com",
          "domain:air-matters.com",
          "domain:air-matters.io",
          "domain:airtable.com",
          "domain:akadns.net",
          "domain:apache.org",
          "domain:api.crisp.chat",
          "domain:api.termius.com",
          "domain:appshike.com",
          "domain:appstore.com",
          "domain:aweme.snssdk.com",
          "domain:bababian.com",
          "domain:battle.net",
          "domain:beatsbydre.com",
          "domain:bet365.com",
          "domain:bilibili.cn",
          "domain:ccgslb.com",
          "domain:ccgslb.net",
          "domain:chunbo.com",
          "domain:chunboimg.com",
          "domain:clashroyaleapp.com",
          "domain:cloudsigma.com",
          "domain:cloudxns.net",
          "domain:cmfu.com",
          "domain:culturedcode.com",
          "domain:dct-cloud.com",
          "domain:didialift.com",
          "domain:douyutv.com",
          "domain:duokan.com",
          "domain:dytt8.net",
          "domain:easou.com",
          "domain:ecitic.net",
          "domain:eclipse.org",
          "domain:eudic.net",
          "domain:ewqcxz.com",
          "domain:fir.im",
          "domain:frdic.com",
          "domain:fresh-ideas.cc",
          "domain:godic.net",
          "domain:goodread.com",
          "domain:haibian.com",
          "domain:hdslb.net",
          "domain:hollisterco.com",
          "domain:hongxiu.com",
          "domain:hxcdn.net",
          "domain:images.unsplash.com",
          "domain:img4me.com",
          "domain:ipify.org",
          "domain:ixdzs.com",
          "domain:jd.hk",
          "domain:jianshuapi.com",
          "domain:jomodns.com",
          "domain:jsboxbbs.com",
          "domain:knewone.com",
          "domain:kuaidi100.com",
          "domain:lemicp.com",
          "domain:letvcloud.com",
          "domain:lizhi.io",
          "domain:localizecdn.com",
          "domain:lucifr.com",
          "domain:luoo.net",
          "domain:mai.tn",
          "domain:maven.org",
          "domain:miwifi.com",
          "domain:moji.com",
          "domain:moke.com",
          "domain:mtalk.google.com",
          "domain:mxhichina.com",
          "domain:myqcloud.com",
          "domain:myunlu.com",
          "domain:netease.com",
          "domain:nfoservers.com",
          "domain:nssurge.com",
          "domain:nuomi.com",
          "domain:ourdvs.com",
          "domain:overcast.fm",
          "domain:paypal.com",
          "domain:paypalobjects.com",
          "domain:pgyer.com",
          "domain:qdaily.com",
          "domain:qdmm.com",
          "domain:qin.io",
          "domain:qingmang.me",
          "domain:qingmang.mobi",
          "domain:qqurl.com",
          "domain:rarbg.to",
          "domain:rrmj.tv",
          "domain:ruguoapp.com",
          "domain:sm.ms",
          "domain:snwx.com",
          "domain:soku.com",
          "domain:startssl.com",
          "domain:store.steampowered.com",
          "domain:symcd.com",
          "domain:teamviewer.com",
          "domain:tmzvps.com",
          "domain:trello.com",
          "domain:trellocdn.com",
          "domain:ttmeiju.com",
          "domain:udache.com",
          "domain:uxengine.net",
          "domain:weather.bjango.com",
          "domain:weather.com",
          "domain:webqxs.com",
          "domain:weico.cc",
          "domain:wenku8.net",
          "domain:werewolf.53site.com",
          "domain:windowsupdate.com",
          "domain:wkcdn.com",
          "domain:workflowy.com",
          "domain:xdrig.com",
          "domain:xiaojukeji.com",
          "domain:xiaomi.net",
          "domain:xiaomicp.com",
          "domain:ximalaya.com",
          "domain:xitek.com",
          "domain:xmcdn.com",
          "domain:xslb.net",
          "domain:xteko.com",
          "domain:yach.me",
          "domain:yixia.com",
          "domain:yunjiasu-cdn.net",
          "domain:zealer.com",
          "domain:zgslb.net",
          "domain:zimuzu.tv",
          "domain:zmz002.com",
          "domain:samsungdm.com" };

    const inline QList<QString> DomainsBlock{ "geosite:category-ads-all" };
    const inline QList<QString> DomainsProxy{ "geosite:google",   "geosite:github",     "geosite:netflix",  "geosite:steam",
                                              "geosite:telegram", "geosite:tumblr",     "domain:naver.com", "geosite:bbc",
                                              "domain:gvt1.com",  "domain:textnow.com", "domain:twitch.tv", "domain:wikileaks.org" };

    const inline QList<QString> IPsProxy{
        "91.108.4.0/22",  "91.108.8.0/22",  "91.108.12.0/22",   "91.108.20.0/22",   "91.108.36.0/23",
        "91.108.38.0/23", "91.108.56.0/22", "149.154.160.0/20", "149.154.164.0/22", "149.154.172.0/22",
        "74.125.0.0/16",  "173.194.0.0/16", "172.217.0.0/16",   "216.58.200.0/24",  "216.58.220.0/24",
        "91.108.56.116",  "91.108.56.0/24", "109.239.140.0/24", "149.154.167.0/24", "149.154.175.0/24",
    };
    const inline QList<QString> IPsBlock{};
    const inline QList<QString> IPsDirect{};
    const inline Qv2ray::base::config::Qv2rayRouteConfig v2rayNScheme({ DomainsDirect, DomainsBlock, DomainsProxy },
                                                                      { IPsDirect, IPsBlock, IPsProxy }, "AsIs");
} // namespace Qv2ray::components::route::presets::v2rayN
