from django.forms import ModelForm

from .models import PressureV2


# htpps://www.youtube.com/watch?v=qwE9TFNub84
class PressureForm(ModelForm):

    class Meta:
        model = PressureV2
        fields = ('millis', 'pressure',)

