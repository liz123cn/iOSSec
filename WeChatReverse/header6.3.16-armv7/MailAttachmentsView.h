//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "INewQQMailExt.h"
#import "IQQMailExt.h"

@class MailAttachment, UIActivityIndicatorView, UIButton, UILabel;

@interface MailAttachmentsView : MMUIButton <IQQMailExt, INewQQMailExt>
{
    UIActivityIndicatorView *m_loadingView;
    UILabel *m_labelName;
    UILabel *m_labelPercent;
    UILabel *m_labelUploadFail;
    UIButton *m_btnResend;
    unsigned long m_uiPercent;
    id <MailAttachmentsViewDelegate> m_delegate;
    MailAttachment *m_mailAttachment;
    BOOL m_bIsNewMail;
}

- (void).cxx_destruct;
- (void)OnNewUploadAttachmentData:(id)arg1 fileName:(id)arg2 uploadedDataSize:(unsigned long)arg3 err:(int)arg4;
- (void)OnResend:(id)arg1;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 ErrNo:(int)arg3;
- (unsigned int)attachmentSize;
- (void)cancelUpload;
- (void)dealloc;
- (id)getDataID;
- (id)getDataName;
- (void)initData;
- (void)initView;
- (id)initWithMailAttachment:(id)arg1 frame:(struct CGRect)arg2 isNewMail:(BOOL)arg3;
- (BOOL)isFilenameEqualToString:(id)arg1;
- (BOOL)isUploadSuccess;
@property(nonatomic) __weak id <MailAttachmentsViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)setData:(id)arg1;
- (void)setDataID:(id)arg1;
- (void)setUploadFailStatus;
- (void)setUploadSuccessStatus;
- (void)setUploadSuccessStatusForNewQQMail:(unsigned long)arg1;
- (void)setUploadingStatus;
- (void)startUploadData;
- (void)updateUploadPercent:(unsigned long)arg1;
- (void)updateUploadPercentForNewQQMail:(unsigned long)arg1;

@end

