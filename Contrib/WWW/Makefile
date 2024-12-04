# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

OBJS = HTAABrow.o HTAAUtil.o HTANSI.o HTAccess.o HTAlert.o HTAnchor.o HTArray.o HTAssoc.o HTAtom.o HTBInit.o HTBTree.o HTBind.o HTBound.o HTBufWrt.o HTCache.o HTChannl.o HTChunk.o HTConLen.o HTCookie.o HTDAV.o HTDNS.o HTDemux.o HTDescpt.o HTDialog.o HTDigest.o HTDir.o HTEPtoCl.o HTError.o HTEscape.o HTEvent.o HTEvtLst.o HTFSave.o HTFTP.o HTFTPDir.o HTFWrite.o HTFile.o HTFilter.o HTFormat.o HTGopher.o HTGuess.o HTHInit.o HTHash.o HTHeader.o HTHist.o HTHome.o HTHost.o HTIcons.o HTInet.o HTInit.o HTLib.o HTLink.o HTList.o HTLocal.o HTLog.o HTMIME.o HTMIMERq.o HTMIMImp.o HTMIMPrs.o HTML.o HTMLGen.o HTMLPDTD.o HTMemLog.o HTMemory.o HTMerge.o HTMethod.o HTMulti.o HTMuxCh.o HTMuxTx.o HTNDir.o HTNet.o HTNetTxt.o HTNews.o HTNewsLs.o HTNewsRq.o HTNoFree.o HTPEP.o HTParse.o HTPlain.o HTProfil.o HTProt.o HTProxy.o HTReader.o HTReqMan.o HTResponse.o HTRules.o HTSChunk.o HTSocket.o HTStream.o HTString.o HTStyle.o HTTCP.o HTTChunk.o HTTP.o HTTPGen.o HTTPReq.o HTTPRes.o HTTPServ.o HTTeXGen.o HTTee.o HTTelnet.o HTTimer.o HTTrace.o HTTrans.o HTUTree.o HTUU.o HTUser.o HTWAIS.o HTWSRC.o HTWWWStr.o HTWriter.o HTXParse.o HTZip.o HText.o SGML.o md5.o

.PHONY: all
.SUFFIXES: .c .o

all: libwww.a

libwww.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

.c.o:
	$(CC) -DHAVE_CONFIG_H $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a
