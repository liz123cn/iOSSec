//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class QRCodeCardView, UIButton;

@interface MoreQRCodeViewController : MMWindowViewController
{
    QRCodeCardView *m_myQRCodeCard;
    UIButton *m_myQRCodeCardBackground;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initQRCodeCardViewFrame;
- (void)onHideMyQrCode;
- (void)onShowMyQrCode;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

