//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordDownloadExt.h"
#import "ImageScrollViewDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class ImageScrollView, MMProgressView, MsgRecordDataWrap, NSString, UIButton, UIDocumentInteractionController, UILabel, UIWebView;

@interface MsgRecordFileDetailViewController : MMUIViewController <IRecordDownloadExt, ImageScrollViewDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    MsgRecordDataWrap *m_recordDataWrap;
    NSString *m_nsFilePath;
    NSString *m_nsFileName;
    unsigned long m_uiFileSize;
    BOOL m_bIsUnkownType;
    unsigned long m_uiPreviewType;
    MMProgressView *m_progressBar;
    UILabel *m_downloadLabel;
    UIButton *m_btnDownload;
    UILabel *m_downloadFail;
    UIButton *m_btnOpenByApp;
    UIDocumentInteractionController *m_vcDocument;
    ImageScrollView *m_imgPreview;
    id <MsgRecordFileDetailDelegate> m_delegate;
    NSString *m_tmpFilePath;
    UIWebView *m_webview;
}

- (void).cxx_destruct;
- (void)AddDownloadFail;
- (void)AddDownloadProgress;
- (void)AddOpenByApp;
- (void)DownloadFile;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned long)arg3 TotalLen:(unsigned long)arg4;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OpenByApp;
- (void)RemoveDownloadFail;
- (void)RemoveDownloadProgress;
- (void)SafeDeleteDocument;
- (void)SetProgress:(float)arg1 TotalSize:(float)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (id)getFileImgByPreviewType;
- (unsigned long)getPreviewType;
- (void)initData;
- (void)initView;
- (id)initWithRecordDataWrap:(id)arg1;
@property(nonatomic) __weak id <MsgRecordFileDetailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MsgRecordDataWrap *m_recordDataWrap; // @synthesize m_recordDataWrap;
- (void)onAction;
- (void)onSingleTap:(id)arg1;
- (void)openFile;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
