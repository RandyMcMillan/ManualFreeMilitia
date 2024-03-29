//
//	ManualFreeMilitiaMainToolbar.h
//	ManualFreeMilitia v2.7.1
//
//	Created by Julius Oklamcak on 2011-07-01.
//	Copyright © 2011-2013 Julius Oklamcak. All rights reserved.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights to
//	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//	of the Software, and to permit persons to whom the Software is furnished to
//	do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in all
//	copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

#import "UIXToolbarView.h"

@class ManualFreeMilitiaMainToolbar;
@class ManualFreeMilitiaDocument;

@protocol ManualFreeMilitiaMainToolbarDelegate <NSObject>

@required // Delegate protocols

- (void)tappedInToolbar:(ManualFreeMilitiaMainToolbar *)toolbar doneButton:(UIButton *)button;
- (void)tappedInToolbar:(ManualFreeMilitiaMainToolbar *)toolbar thumbsButton:(UIButton *)button;
- (void)tappedInToolbar:(ManualFreeMilitiaMainToolbar *)toolbar printButton:(UIButton *)button;
- (void)tappedInToolbar:(ManualFreeMilitiaMainToolbar *)toolbar emailButton:(UIButton *)button;
- (void)tappedInToolbar:(ManualFreeMilitiaMainToolbar *)toolbar markButton:(UIButton *)button;

@end

@interface ManualFreeMilitiaMainToolbar : UIXToolbarView

@property (nonatomic, weak, readwrite) id <ManualFreeMilitiaMainToolbarDelegate> delegate;

- (id)initWithFrame:(CGRect)frame document:(ManualFreeMilitiaDocument *)object;

- (void)setBookmarkState:(BOOL)state;

- (void)hideToolbar;
- (void)showToolbar;

@end
